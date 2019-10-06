#ifndef NET_H
#define NET_H
#include <QUrl>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QDesktopServices>
#include <string>
#include <qeventloop.h>
class Net{
public:
    Net();
    QString getImg(QString res);
};

#endif // NET_H
