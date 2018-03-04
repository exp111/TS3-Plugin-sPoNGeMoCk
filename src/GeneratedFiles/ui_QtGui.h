/********************************************************************************
** Form generated from reading UI file 'QtGui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUI_H
#define UI_QTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGui
{
public:
    QPushButton *mockifyButton;
    QLineEdit *inputLine;
    QLineEdit *outputLine;

    void setupUi(QWidget *QtGui)
    {
        if (QtGui->objectName().isEmpty())
            QtGui->setObjectName(QStringLiteral("QtGui"));
        QtGui->resize(339, 102);
        mockifyButton = new QPushButton(QtGui);
        mockifyButton->setObjectName(QStringLiteral("mockifyButton"));
        mockifyButton->setGeometry(QRect(110, 40, 121, 23));
        mockifyButton->setCheckable(false);
        inputLine = new QLineEdit(QtGui);
        inputLine->setObjectName(QStringLiteral("inputLine"));
        inputLine->setGeometry(QRect(10, 10, 321, 20));
        outputLine = new QLineEdit(QtGui);
        outputLine->setObjectName(QStringLiteral("outputLine"));
        outputLine->setGeometry(QRect(10, 70, 321, 20));
        outputLine->setReadOnly(false);

        retranslateUi(QtGui);
        QObject::connect(mockifyButton, SIGNAL(clicked()), QtGui, SLOT(mockify()));

        QMetaObject::connectSlotsByName(QtGui);
    } // setupUi

    void retranslateUi(QWidget *QtGui)
    {
        QtGui->setWindowTitle(QApplication::translate("QtGui", "Sponge Mockify", Q_NULLPTR));
        mockifyButton->setText(QApplication::translate("QtGui", "Sponge Mockify", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGui: public Ui_QtGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUI_H
