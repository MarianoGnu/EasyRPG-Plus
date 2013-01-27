#ifndef DIALOGCOMMAND_H
#define DIALOGCOMMAND_H

#include <QDialog>
#include <command.h>

class Command;

namespace Ui {
class DialogCommand;
}

class DialogCommand : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogCommand(QWidget *parent);
    ~DialogCommand();
    
    void run();

    Command *command();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::DialogCommand *ui;

    Command * m_command;
};

#endif // DIALOGCOMMAND_H
