#include "QtGui.h"

#include "spongeMockify.h"

QtGui::QtGui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QtGui::~QtGui()
{
}

void QtGui::mockify()
{
	std::string input = ui.inputLine->text().toStdString();

	SpongeMockify(input);

	ui.outputLine->setText(QString(input.c_str()));
}