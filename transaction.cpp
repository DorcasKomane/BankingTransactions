#include "transaction.h"
#include <QMetaProperty>
#include "enumtype.h"

Transaction::Transaction()
{

}

void Transaction::setTransactionDate(QString tDate)
{
    transactionDate = tDate;
}

void Transaction::setTransactionTime(QString tTime)
{
    transactionTime = tTime;
}

void Transaction::setTransactionAmount(QString tAmount)
{
    transactionAmount = tAmount;
}

void Transaction::setTransactionType(QString  tType)
{
    transactionType = tType;
}

QString Transaction::toString()
{
    QString output = QString(transactionType + ": " + " R" + transactionAmount + " on " + transactionDate + " at " + transactionTime);

    return output;
}

QString Transaction::getTransactionDate()
{
    return transactionDate;
}

QString Transaction::getTransactionTime()
{
    return transactionTime;
}

QString Transaction::getTransactionAmount()
{
    return transactionAmount;
}

QString  Transaction::getTransactionType() const
{
    return transactionType;
}




