#include "mainwindow.h"
#include "ui_mainwindow.h"


bool add=false;
bool sub=false;
bool mul=false;
bool divi=false;


int old_val=0;
int new_val=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton0_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("0");
    }
    else{
        ui->label_display->setText(display +"0");
    }

}


void MainWindow::on_pushButton1_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("1");
    }
    else{
        ui->label_display->setText(display +"1");
    }
}


void MainWindow::on_pushButton2_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("2");
    }
    else{
        ui->label_display->setText(display +"2");
    }
}

void MainWindow::on_pushButton3_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("3");
    }
    else{
        ui->label_display->setText(display +"3");
    }
}


void MainWindow::on_pushButton4_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("4");
    }
    else{
        ui->label_display->setText(display +"4");
    }
}


void MainWindow::on_pushButton5_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("5");
    }
    else{
        ui->label_display->setText(display +"5");
    }
}


void MainWindow::on_pushButton6_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("6");
    }
    else{
        ui->label_display->setText(display +"6");
    }
}


void MainWindow::on_pushButton7_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("7");
    }
    else{
        ui->label_display->setText(display +"7");
    }
}


void MainWindow::on_pushButton8_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("8");
    }
    else{
        ui->label_display->setText(display +"8 ");
    }
}


void MainWindow::on_pushButton9_clicked()
{
    QString display=ui->label_display->text();
    if(display.toInt(0,10)==0){
        ui->label_display->setText("9");
    }
    else{
        ui->label_display->setText(display +"9");
    }
}




void MainWindow::on_PB_clear_clicked()
{
    ui->label_display->setText("0");
}


void MainWindow::on_PB_Add_clicked()
{
    old_val=ui->label_display->text().toInt(0,10);
    add=true;
    sub=false;
    mul=false;
    divi=false;
    ui->label_display->setText("0");
}


void MainWindow::on_PB_minus_clicked()
{
    old_val=ui->label_display->text().toInt(0,10);
    add=false;
    sub=true;
    mul=false;
    divi=false;
    ui->label_display->setText("0");
}


void MainWindow::on_PB_mul_clicked()
{
    old_val=ui->label_display->text().toInt(0,10);
    add=false;
    sub=false;
    mul=true;
    divi=false;
    ui->label_display->setText("0");
}


void MainWindow::on_PB_DIV_clicked()
{
    old_val=ui->label_display->text().toInt(0,10);
    add=false;
    sub=false;
    mul=false;
    divi=true;
    ui->label_display->setText("0");
}


void MainWindow::on_PB_equal_clicked()
{
     int res=0;
    new_val=ui->label_display->text().toInt(0,10);

    if(add==true){
        res=old_val+new_val;

    }
    else if(sub==true){
        res=old_val-new_val;
    }
    else if(mul==true){
        res=old_val*new_val;
    }
    else if(divi==true)
      {
        res=old_val/new_val;
    }

    ui->label_display->setText(QString::number(res,10));
}

