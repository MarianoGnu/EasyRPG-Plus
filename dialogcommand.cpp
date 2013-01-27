#include "dialogcommand.h"
#include "ui_dialogcommand.h"

DialogCommand::DialogCommand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCommand)
{
    ui->setupUi(this);
}

DialogCommand::~DialogCommand()
{
    delete ui;
}

void DialogCommand::run()
{
    m_command = new Command();
    show();
}

Command* DialogCommand::command()
{
    return m_command;
}

void DialogCommand::on_pushButton_clicked()
{
    m_command->setId(Command::ShowDialog);
    hide();
}

void DialogCommand::on_pushButton_2_clicked()
{
    m_command->setId(Command::MultipleChoice);
    hide();
}

void DialogCommand::on_pushButton_3_clicked()
{
    m_command->setId(Command::ImputNumber);
    hide();
}

void DialogCommand::on_pushButton_4_clicked()
{
    m_command->setId(Command::ImputString);
    hide();
}

void DialogCommand::on_pushButton_5_clicked()
{
    m_command->setId(Command::If);
    hide();
}

void DialogCommand::on_pushButton_6_clicked()
{
    m_command->setId(Command::SetLabel);
    hide();
}

void DialogCommand::on_pushButton_7_clicked()
{
    m_command->setId(Command::GoToLabel);
    hide();
}

void DialogCommand::on_pushButton_8_clicked()
{
    m_command->setId(Command::Loop);
    hide();
}

void DialogCommand::on_pushButton_9_clicked()
{
    m_command->setId(Command::Break);
    hide();
}

void DialogCommand::on_pushButton_10_clicked()
{
    m_command->setId(Command::Continue);
    hide();
}
