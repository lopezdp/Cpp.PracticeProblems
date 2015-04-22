#ifndef GUITUTORIAL_H
#define GUITUTORIAL_H

#include <QDialog>
#include "ui_guitutorial.h"

class GoToCellDialog: public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT
public:
    GoToCellDialog(QWidget *parent = 0);
private slots:
    void on_lineEdit_textChanged();
};




/*#include <QWidget>

namespace Ui {
class GUITutorial;
}

class GUITutorial : public QWidget
{
    Q_OBJECT

public:
    explicit GUITutorial(QWidget *parent = 0);
    ~GUITutorial();

private:
    Ui::GUITutorial *ui;
};*/

#endif // GUITUTORIAL_H
