#include "qtwidgetsapplication1.h"
#include <QAbstractButton>

bool button = false;
bool checked = false;

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}


void QtWidgetsApplication1::on_pushBtn_toggled(bool cheked)
{

    if (checked)
    {   
        ui.pushBtn->setIcon(QIcon("E:/png/OFFF.png)"));
        
    }
    else
    {
        ui.pushBtn->setIcon(QIcon("E:/png/ON.png)"));
        
    }
}
void QtWidgetsApplication1::on_pushBtn_2_toggled(bool cheked)
{

    if (checked)
    {
        ui.pushBtn->setIcon(QIcon("E:/png/OFFF.png)"));

    }
    else
    {
        ui.pushBtn->setIcon(QIcon("E:/png/ON.png)"));

    }
}
void QtWidgetsApplication1::on_pushBtn_3_toggled(bool cheked)
{

    if (checked)
    {
        ui.pushBtn->setIcon(QIcon("E:/png/OFFF.png)"));


    }
    else
    {
        ui.pushBtn->setIcon(QIcon("E:/png/ON.png)"));

    }
}
