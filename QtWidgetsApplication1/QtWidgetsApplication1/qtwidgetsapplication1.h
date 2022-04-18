#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtwidgetsapplication1.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget* parent = Q_NULLPTR);

private slots:
    void on_pushBtn_toggled(bool checked);
    void on_pushBtn_2_toggled(bool checked);
    void on_pushBtn_3_toggled(bool checked);

private:
    Ui::QtWidgetsApplication1Class ui;

};