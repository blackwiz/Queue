#include "mainwindow.h"
#include <Inc/Application>
#include <Inc/CallerSound>
#include "dialog.h"
#include "app_globals.h"

int main(int argc, char *argv[])
{
    Application a(argc, argv);
    //MainWindow w;
    //w.show();

    m_config = new DSettings(CONFIGFILE);
    m_confix = new DSettings(CONFIXFILE);
    m_dB = new DB();    // config instantiate first, because DB need them

    Dialog d;
    d.exec();
    return a.exec();
}

//#include <QLabel>
//#include <Inc/Application>

//class MarqueeLabel : public QLabel {
// public:
//  explicit MarqueeLabel(const QString &text) : QLabel(text), pos_(0) {
//    QString pad(25, ' ');
//    actual_text_ = text + pad;
//    startTimer(100);
//  }

//protected:
//  void timerEvent(QTimerEvent *) {
//    pos_ = ++pos_ % actual_text_.length();
//    setText(actual_text_.mid(pos_).append(actual_text_.left(pos_)));
//  }

//private:
//  QString actual_text_;
//  int pos_;
//};

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MarqueeLabel lbl("WidgetMarqueeLabel");
//    lbl.show();
//    return a.exec();
//}
