#pragma once

#include <QtWidgets/QDialog>
#include "ui_GameInterface.h"

class GameInterface : public QDialog
{
	Q_OBJECT

public:
	GameInterface(QWidget *parent = Q_NULLPTR);

private:
	Ui::GameInterfaceClass ui;
};
