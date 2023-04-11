#include <QApplication>
#include <QPushButton>
#include <QTimer>
#include <QHBoxLayout>
#include <QStackedWidget>
#include <QLabel>
#include <QGraphicsView>
#include <QTextEdit>
#include <QSplitter>
#include <iostream>
#include "MainWindow.hxx"

// class TitleLabel : public QWidget
// {
// public:
//   TitleLabel(const QString &text = "", const QString &docLink = "", QWidget * parent = 0);
// 
//   void setText(const QString& text);
//   void setDocLink(const QString& link);
// 
// private:
//   QLabel * label_;
// };
// 
// // custom QLabel for all result windows
// TitleLabel::TitleLabel(const QString &text, const QString &docLink, QWidget * parent)
//   : QWidget(parent)
// {
//   QHBoxLayout * layout = new QHBoxLayout(this);
//   layout->setContentsMargins(0, 0, 0, 0);
// 
//   label_ = new QLabel(text, this);
//   label_->setFrameStyle(QFrame::StyledPanel);
//   label_->setMargin(5);
//   label_->setStyleSheet("QLabel { font: bold; background-color: white; border: 2px solid #003366;}");
//   layout->addWidget(label_, 1);
// //   if (!docLink.isEmpty())
// //   {
// //     DocumentationToolButton * infoButton = new DocumentationToolButton(docLink);
// //     layout->addWidget(infoButton);
// //   }
// }
// 
// 
// void TitleLabel::setText(const QString& text)
// {
//   label_->setText(text);
// }
// 
// 
// void TitleLabel::setDocLink(const QString& link)
// {
//   if (!layout())
//     return;
// //   DocumentationToolButton * infoButton = new DocumentationToolButton(link);
// //   layout()->addWidget(infoButton);
// }



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//     QWidget * widget = new QWidget;
//     QHBoxLayout * hbox = new QHBoxLayout;
// 
//     QPushButton * button1 = new QPushButton("set");
//     QPushButton * button2 = new QPushButton("add");
//     hbox->addWidget(button1);
//     hbox->addWidget(button2);
//     QStackedWidget * stacked = new QStackedWidget;
//     QLabel * label1 = new QLabel("label1");
//     QLabel * label2 = new QLabel("label2");
// //     QLabel * label3 = new QLabel("label3");
//     stacked->addWidget(label1);
//     stacked->addWidget(label2);
//     hbox->addWidget(stacked);
//     widget->setLayout(hbox);
//     widget->show();
// 
//     QObject::connect(button1, &QPushButton::clicked, [=]() { stacked->setCurrentIndex(stacked->currentIndex() ? 0:1); });
//     QObject::connect(button2, &QPushButton::clicked, [=]() {
// 
//       QVBoxLayout * mainLayout = new QVBoxLayout;
// 
//       TitleLabel * titleLabel_ = new TitleLabel("Study workflow");
//       mainLayout->addWidget(titleLabel_);
// 
//       // Widgets
//       QSplitter * splitter = new QSplitter(Qt::Vertical);
// 
//       QGraphicsView * graphView = new QGraphicsView;
//       QGraphicsScene * scene_ = new QGraphicsScene;
// 
//       // -- set scene --
//       graphView->setScene(scene_);
//       splitter->addWidget(graphView);
//       splitter->setStretchFactor(0, 3);
// 
//       // -- text area --
//       QTextEdit * textArea_ = new QTextEdit;
//       textArea_->setReadOnly(true);
//       splitter->addWidget(textArea_);
//       splitter->setStretchFactor(1, 1);
// 
//       mainLayout->addWidget(splitter);
//       QWidget * widget3 = new QWidget;
//       widget3->setLayout(mainLayout);
// 
//       stacked->addWidget(widget3);  stacked->setCurrentWidget(widget3);
//     });
//     
//     QTimer *timer = new QTimer;
// //     QObject::connect(timer, SIGNAL(timeout()), &hmw, SLOT(close()));
//     timer->start(10000);
    
    MainWindow window;
  window.resize(1024, 768);
  window.show();
    return app.exec();
}
