#include "guitutorial.h"
#include "ui_guitutorial.h"
#include <QtGui>

GoToCellDialog::GoToCellDialog(QWidget *parent) : QDialog(parent)
{
    setupUi(this);

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void GoToCellDialog::on_lineEdit_textChanged()
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}

/*
GUITutorial::GUITutorial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUITutorial)
{
    ui->setupUi(this);
}

GUITutorial::~GUITutorial()
{
    delete ui;
}
*/
