#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->btn_red,SIGNAL(clicked()),this,SLOT(setTextColor()));
    QObject::connect(ui->btn_black,SIGNAL(clicked()),this,SLOT(setTextColor()));
    QObject::connect(ui->btn_bule,SIGNAL(clicked()),this,SLOT(setTextColor()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_check_underline_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::on_check_italic_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::on_check_bold_clicked(bool checked)
{
    QFont font = ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);
}

void MainWindow::setTextColor(){
    QPalette pale = ui->textEdit->palette();
    if(ui->btn_red->isChecked())
        pale.setColor(QPalette::Text,Qt::red);
    else if(ui->btn_bule->isChecked())
        pale.setColor(QPalette::Text,Qt::blue);
    else if (ui->btn_black->isChecked())
        pale.setColor(QPalette::Text,Qt::black);
    else
        pale.setColor(QPalette::Text,Qt::gray);
    ui->textEdit->setPalette(pale);
}
