#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BasicOpenGLQt.h"

class BasicOpenGLQt : public QMainWindow
{
	Q_OBJECT

public:
	BasicOpenGLQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::BasicOpenGLQtClass ui;
};
