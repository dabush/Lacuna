/*
*   This script loads a PDF into the pdf.js demo viewer iframe and
*   provides an interface through which the PDF Annotator plugin
*   can access the document content to enable PDF annotation.
*/

(function() {

    Drupal.behaviors.pdfDocumentView = {
        attach: function() {

            Drupal.PDFDocumentView = {}
            Drupal.PDFDocumentView.loaded = Promise.resolve()
            .then(loadPDFViewer)
            .then(loadPDFInViewer)

            Drupal.PDFDocumentView.pagesLoaded = Drupal.PDFDocumentView.loaded
            .then(function() {
                return Drupal.PDFDocumentView.PDFViewerApplication.pdfViewer.pagesPromise
            })

        }
    }


    /*
    *   Sets the iframe src attribute to load the PDF viewer, returning
    *   a promise for the iframe finishing loading its contents.
    */

    function loadPDFViewer() {

        var viewer = document.querySelector('iframe.pdf')
        var viewer_src_url = Drupal.settings.lacuna_pdf_document.viewer_src_url
        var viewer_style_url = Drupal.settings.lacuna_pdf_document.viewer_style_url
        viewer.src = viewer_src_url + '?file='
        return new Promise(function(resolve) {
            
            viewer.addEventListener('load', function() {
                var styleElement = document.createElement('link')
                styleElement.href = viewer_style_url
                styleElement.rel = 'stylesheet'
                styleElement.type = 'text/css'
                viewer.contentDocument.head.appendChild(styleElement)
                Drupal.PDFDocumentView.PDFJS = viewer.contentWindow.PDFJS
                Drupal.PDFDocumentView.PDFViewerApplication = viewer.contentWindow.PDFViewerApplication
                Drupal.PDFDocumentView.frameDocument = viewer.contentDocument
                resolve()
            })
        
        })

    }


    /*
    *   Loads the document PDF into the PDF viewer, returning a
    *   promise for the document completing loading.
    */

    function loadPDFInViewer() {

        var viewer = Drupal.PDFDocumentView.PDFViewerApplication
        var pdf_url = Drupal.settings.lacuna_pdf_document.pdf_url
        return viewer.open(pdf_url)
        .then(function() { return viewer.pdfLoadingTask })

    }

})()
