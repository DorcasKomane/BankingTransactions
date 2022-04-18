#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QDate>
#include <QTime>
#include <QObject>
#include <QStringList>
#include <QMetaEnum>
#include <QString>
#include "enumtype.h"

class Transaction: public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString transactionDate READ getTransactionDate WRITE setTransactionDate)
    Q_PROPERTY(QString transactionTime READ getTransactionTime WRITE setTransactionTime)
    Q_PROPERTY(QString transactionAmount READ getTransactionAmount WRITE setTransactionAmount)
    Q_PROPERTY(QString transactionType READ getTransactionType WRITE setTransactionType)

public:

    Transaction();
    Transaction(QString tDate, QString tTime, QString tAmount, QString tType);
    QStringList transactionTypes();

    void setTransactionDate(QString tDate);
    void setTransactionTime(QString tTime);
    void setTransactionAmount(QString tAmount);
    void setTransactionType(QString tType);
    QString toString();

    QString getTransactionDate();
    QString getTransactionTime();
    QString getTransactionAmount();
    QString  getTransactionType() const;

private:
    QString transactionDate;
    QString transactionTime;
    QString transactionAmount;
    QString  transactionType;

};

#endif // TRANSACTION_H
