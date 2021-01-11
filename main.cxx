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

    QPushButton * button = new QPushButton("show");
    hbox->addWidget(button);
    QStackedWidget * stacked = new QStackedWidget;
    QLabel * label1 = new QLabel("label1");
    QLabel * label2 = new QLabel("label2");
    stacked->addWidget(label1);
    stacked->addWidget(label2);
    hbox->addWidget(stacked);
    widget->setLayout(hbox);
    widget->show();

    QObject::connect(button, &QPushButton::clicked, [=]() { stacked->setCurrentIndex(stacked->currentIndex() ? 0:1); });
    
    QTimer *timer = new QTimer;
//     QObject::connect(timer, SIGNAL(timeout()), &hmw, SLOT(close()));
    timer->start(10000);
    
    return app.exec();
}
