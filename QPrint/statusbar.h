//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QObject>
#include <QStatusBar>
#include "statusbarwidget.h"

#define SB      ui->statusBar->sbWidget()

class StatusBar : public QStatusBar
{
public:
    explicit StatusBar(QWidget *parent = Q_NULLPTR);
    virtual ~StatusBar();

    void updateUi();

protected:
    void showEvent(QShowEvent *);

private:
    StatusBarWidget *m_sbWidget;

public:
    StatusBarWidget *sbWidget() const;

};

#endif // STATUSBAR_H
