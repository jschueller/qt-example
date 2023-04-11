#include "MainWindow.hxx"
#include <iostream>

#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
{
  newAction_ = new QAction("new");
  newAction_->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_N));
  newAction_->setShortcutContext(Qt::ApplicationShortcut);
  newAction_->setStatusTip(tr("Create a new study"));
    connect(newAction_, SIGNAL(triggered(bool)), this, SLOT(newFile()));

  
  QMenuBar * menuBar = new QMenuBar;
  QMenu *toolBarMenu = menuBar->addMenu(tr("&Toolbars"));
  toolBarMenu->addAction(newAction_);
  setMenuBar(menuBar);
}

void MainWindow::newFile()
{
  ++ count_;
  std::cout << "newFile"<<count_<<std::endl;
}

int MainWindow::getCount() const
{
  return count_;
}
