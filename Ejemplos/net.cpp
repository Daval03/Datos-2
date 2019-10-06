#include "net.h"
Net::Net(){}
QString Net::getImg(QString res){
    QNetworkAccessManager* netAccManager = new QNetworkAccessManager;
    QUrl url;
    url.setUrl(res);
    QNetworkRequest request(url);
    QNetworkReply *replyy = netAccManager->get(request);
    QEventLoop loop;
    QObject::connect(replyy,SIGNAL(finished()),&loop,SLOT(quit()));
    loop.exec();
    QString bytes = replyy->readAll();
    QRegExp rx("https");
    QStringList list = bytes.split(rx, QString::SkipEmptyParts);
    QString link=("https" + list.takeAt(13).left(114));
    return link;
}
