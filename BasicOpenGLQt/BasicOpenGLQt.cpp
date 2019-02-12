#include "BasicOpenGLQt.h"

BasicOpenGLQt::BasicOpenGLQt(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::BasicOpenGLQt)
{
	ui->setupUi(this);
}
