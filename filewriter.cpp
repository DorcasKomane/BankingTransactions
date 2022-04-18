#include "filewriter.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStringList>

FileWriter::FileWriter(QString fn): fileName(fn)
{

}

bool FileWriter::writeToFile()
{
    QList<Transaction*> t = TransactionList::getInstance()->getTransactionList();


    QFile file("transactionFile.txt");

    if (!file.open(QIODevice::WriteOnly))
            return false;

    QTextStream stream(&file);

    foreach(Transaction *transaction, t)
    {
        stream << transaction->toString() << Qt::endl;
    }

    file.close();

    return true;
}

