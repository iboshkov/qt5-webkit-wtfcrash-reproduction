#include "Reproduction.h"
#include "ui_Reproduction.h"

Reproduction::Reproduction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reproduction)
{
    ui->setupUi(this);
    QString html = "";
    QString embed1 = "<iframe width=\"" + QString::number(270) + "\" height=\"315\" src=\"https://www.youtube.com/embed/QEUmJR3-Um8\" frameborder=\"0\" allowfullscreen></iframe><br/>";
    QWebView* web = ui->webView;
    int count = 2; // when there is more than 1 video, the WTFCrash happens. (assertion !needsLayout fails)
    for (int i = 0; i < 2; i++)
    {
        html += embed1;
    }
    html += "";
    web->setHtml(html);
}

Reproduction::~Reproduction()
{
    delete ui;
}
