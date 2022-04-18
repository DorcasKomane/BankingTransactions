#ifndef BANKINGTRANSACTIONS_H
#define BANKINGTRANSACTIONS_H

#include <QMainWindow>
#include <QList>
#include "transaction.h"
#include "transactionlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BankingTransactions; }
QT_END_NAMESPACE

class BankingTransactions : public QMainWindow
{
    Q_OBJECT

public:
    BankingTransactions(QWidget *parent = nullptr);
    ~BankingTransactions();

private slots:
    void on_tofileButton_clicked();
    void on_depositButton_clicked();
    void on_withdrawalButton_clicked();

private:
    Ui::BankingTransactions *ui;
    TransactionList *transactionList;
};
#endif // BANKINGTRANSACTIONS_H
