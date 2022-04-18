#ifndef TRANSACTIONLIST_H
#define TRANSACTIONLIST_H

#include "transaction.h"
#include <QList>

class TransactionList
{
public:
    static TransactionList* getInstance();
    static void deleteInstance();
    void addTransaction(Transaction *t);
    QList<Transaction*> getTransactionList() const;

private:
    TransactionList();
    ~TransactionList();
    static TransactionList* oneInstance;
    QList<Transaction*> transactionList;
};

#endif // TRANSACTIONLIST_H
