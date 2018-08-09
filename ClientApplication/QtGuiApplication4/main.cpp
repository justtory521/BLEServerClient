#include "QtGuiApplication4.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ClientApplication w;
	w.show();
	return a.exec();
}
