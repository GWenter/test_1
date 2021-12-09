#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_check_italic_clicked(bool checked);
    void on_check_underline_clicked(bool checked);
    void on_check_bold_clicked(bool checked);

    void setTextColor();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
