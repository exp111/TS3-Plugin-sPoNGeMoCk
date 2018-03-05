#include "QtGui.h"

#include "spongeMockify.h"
#include "config.h"

QtGui::QtGui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.mockifyIncomingCheckBox->setChecked(config->mockifyIncoming);
}

QtGui::~QtGui()
{
}

void QtGui::setMockifyIncoming(bool value)
{
	config->mockifyIncoming = value;
}

void QtGui::mockify()
{
	std::string input = ui.inputLine->text().toStdString();

	SpongeMockify(input);

	ui.outputLine->setText(QString(input.c_str()));
}