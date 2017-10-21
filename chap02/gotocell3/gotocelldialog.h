#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

#include "ui_gotocelldialog.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog//继承了UI中的对话框
{

    Q_OBJECT

public:

    GoToCellDialog(QWidget *parent = 0);//没有父对象

private slots:

    void on_lineEdit_textChanged();


};

#endif
