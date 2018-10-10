#include "GameInterface.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GameInterface w;
	w.show();
	return a.exec();
}
