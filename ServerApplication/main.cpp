#include "ServerApplication.h"
#include <QtWidgets/QApplication>

/*Starting The Application*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ServerApplicationClass w;
	w.show();
	return a.exec();
}
