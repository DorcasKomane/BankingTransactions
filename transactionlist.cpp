#include "transactionlist.h"

TransactionList* TransactionList::oneInstance = NULL;

void TransactionList::addTransaction(Transaction *t)
{
    transactionList.append(t);
}

QList<Transaction*> TransactionList::getTransactionList() const
{
    return transactionList;
}

TransactionList* TransactionList::getInstance()
{
    if (oneInstance == NULL)
        oneInstance = new TransactionList();

    return oneInstance;
}

TransactionList::TransactionList()
{

}

void TransactionList::deleteInstance()
{
    delete oneInstance;
}

TransactionList::~TransactionList()
{
    qDeleteAll(transactionList);
}
