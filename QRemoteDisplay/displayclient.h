#ifndef DISPLAYCLIENT_H
#define DISPLAYCLIENT_H

#include <QObject>
#include "../SharedClass/socket.h"
#include "../SharedClass/config.h"
#include <Inc/Setting>
#include "../SharedClass/ndhelper.h"
#include "../SharedClass/StatusBar/statusbarwidget.h"
#include "node.h"
#include "bignode.h"
#include "../SharedClass/callersound.h"

class DisplayClient : public QObject
{
    Q_OBJECT
public:
    explicit DisplayClient(QObject *parent = 0);
    ~DisplayClient();

    bool isConnected();
    void connectToHost();
    void disconnectFromHost();
    void setStatusBarWidget(StatusBarWidget *statusBarWidget);
    void setBigNode(BigNode *bigNode) { m_bigNode = bigNode; }

signals:

public slots:
    void slotReadyRead();
    void slotSocketError( QAbstractSocket::SocketError );
    void slotSocketDisconnected();
    void slotConnected();

private:
    Socket *m_tcpSocket;
    bool m_connected;
    NDHelper m_dt;
    StatusBarWidget *m_statusBarWidget;
    Node* m_node;
    BigNode* m_bigNode;
    CallerSound *m_callerSound;


};

#endif // DISPLAYCLIENT_H
