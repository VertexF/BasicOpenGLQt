#include "BasicOpenGLQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BasicOpenGLQt w;
	w.show();
	return a.exec();
}
