#include "bankingtransactions.h"
#include "ui_bankingtransactions.h"
#include "filewriter.h"
#include "transactionlist.h"
#include <QMessageBox>
#include <QMetaObject>
#include <QMetaProperty>
#include <QDebug>
#include "enumtype.h"
#include "transaction.h"

BankingTransactions::BankingTransactions(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::BankingTransactions)
{
    ui->setupUi(this);

    transactionList = TransactionList::getInstance();

    QDateTime dateTime = dateTime.currentDateTime();
    QString dateTimeString = dateTime.toString("ddd, MMM d yyyy");
    QString timeString = dateTime.toString("hh:mm:ss");

    ui->dateLabel->setText(dateTimeString);
    ui->timeLabel->setText(timeString);

}

void BankingTransactions::on_tofileButton_clicked()
{

    FileWriter writer("/Users/macbookpro/Desktop/transactionFile.txt");

    if(writer.writeToFile())
        QMessageBox::information(this, "Message", "Transaction list successfully written to file.");
    else
        QMessageBox::warning(this, "Error", "Transaction list could not be written to file.");

}

void BankingTransactions::on_depositButton_clicked()
{
    Transaction *transaction = new Transaction;

    transaction->setProperty("transactionDate", ui->dateLabel->text());
    transaction->setProperty("transactionTime", ui->timeLabel->text());
    transaction->setProperty("transactionAmount", ui->doubleSpinBox->text());
    transaction->setProperty("transactionType", ui->depositButton->text());

    transactionList->addTransaction(transaction); //add transaction to the list

    qDebug() << transaction->toString();

    ui->doubleSpinBox->clear();

}

void BankingTransactions::on_withdrawalButton_clicked()
{
    Transaction *transaction = new Transaction;

    transaction->setProperty("transactionDate", ui->dateLabel->text());
    transaction->setProperty("transactionTime", ui->timeLabel->text());
    transaction->setProperty("transactionAmount", ui->doubleSpinBox->text());
    transaction->setProperty("transactionType", ui->withdrawalButton->text());

    transactionList->addTransaction(transaction); //add transaction to the list

    qDebug() << transaction->toString();

    ui->doubleSpinBox->clear();
}


BankingTransactions::~BankingTransactions()
{
    delete ui;
}
