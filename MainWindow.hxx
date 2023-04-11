#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>
#include <QAction>

class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  MainWindow(QWidget *parent = 0);
  int getCount() const;
private slots:
  void newFile();
private:
  QAction * newAction_;
  int count_ = 0;
  
  
};

#endif
