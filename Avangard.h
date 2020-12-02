#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Avangard.h"

class Avangard : public QMainWindow
{
    Q_OBJECT

public:
    Avangard(QWidget *parent = Q_NULLPTR);

private:
    Ui::AvangardClass ui;
};
