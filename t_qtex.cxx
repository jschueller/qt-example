#include <QApplication>
#include <QPushButton>
#include <QTimer>
#include <QHBoxLayout>
#include <QStackedWidget>
#include <QLabel>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget * widget = new QWidget;
    QHBoxLayout * hbox = new QHBoxLayout;

    QPushButton * button1 = new QPushButton("set");
    QPushButton * button2 = new QPushButton("add");
    hbox->addWidget(button1);
    hbox->addWidget(button2);
    QStackedWidget * stacked = new QStackedWidget;
    QLabel * label1 = new QLabel("label1");
    QLabel * label2 = new QLabel("label2");
    QLabel * label3 = new QLabel("label3");
    stacked->addWidget(label1);
    stacked->addWidget(label2);
    hbox->addWidget(stacked);
    widget->setLayout(hbox);
    widget->show();

    QObject::connect(button1, &QPushButton::clicked, [=]() { stacked->setCurrentIndex(stacked->currentIndex() ? 0:1); });
    QObject::connect(button2, &QPushButton::clicked, [=]() { stacked->addWidget(label3);  stacked->setCurrentWidget(label3); });
    
    QTimer *timer = new QTimer;
//     QObject::connect(timer, SIGNAL(timeout()), &hmw, SLOT(close()));
    timer->start(10000);
    
    return app.exec();
}
