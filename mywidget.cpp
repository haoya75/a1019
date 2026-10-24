#include "mywidget.h"
#include "ui_mywidget.h"

#include <QFile>
#include <QDebug>

#include "QFileDialog"

QString mFilename = "C:/test/mtfile.txt";

void Write(QString Filename,QString str){
    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "無法開啟檔案";
        return;
    }

    QTextStream out(&mFile);
    out << str;
    mFile.flush();
    mFile.close();
}

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(4);

    QStringList ColTotle;
    ColTotle << QStringLiteral("學號")<<QStringLiteral("班級")<<QStringLiteral("姓名")<<QStringLiteral("電話");

    ui->tableWidget->setHorizontalHeaderLabels(ColTotle);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_2_clicked()
{
    QTableWidgetItem *inputROW1,*inputROW2,*inputROW3,*inputROW4;

    inputROW1 = new QTableWidgetItem(QString(ui->lineEdit_1->text()));
    inputROW2 = new QTableWidgetItem(QString(ui->lineEdit_8->text()));
    inputROW3 = new QTableWidgetItem(QString(ui->lineEdit_9->text()));
    inputROW4 = new QTableWidgetItem(QString(ui->lineEdit_10->text()));

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,inputROW1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,inputROW2);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,inputROW3);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,inputROW4);


}


void MyWidget::on_pushButton_clicked()
{
    QString saveFile = "";
    //QString saveStr;
    mFilename = QFileDialog::getSaveFileName(this,"匯出通訊錄");

    for(int i = 0;i < ui->tableWidget->rowCount();i++){
        for(int j = 0;j < ui->tableWidget->columnCount();j++){
            saveFile += ui->tableWidget->item(i,j)->text() + ",";
        }
        saveFile+="\n";
    }
    Write(mFilename,saveFile);
}


void MyWidget::on_pushButton_3_clicked()
{
    QString mFilename = QFileDialog::getOpenFileName(this, "匯入通訊錄");

    if (mFilename.isEmpty()) {
        return;
    }

    QFile file(mFilename);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    QStringList lines;

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (!line.trimmed().isEmpty()) {
            lines.append(line);
        }
    }
    file.close();

    if (lines.isEmpty()) {
        return;
    }

    int rowCount = lines.size();
    int colCount = 0;

    QStringList firstRowCols = lines.at(0).split(',');
    colCount = firstRowCols.size();

    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(colCount);

    for (int i = 0; i < rowCount; ++i) {
        QStringList cols = lines.at(i).split(',');
        for (int j = 0; j < cols.size() && j < colCount; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(cols.at(j));
            ui->tableWidget->setItem(i, j, item);
        }
    }
}
