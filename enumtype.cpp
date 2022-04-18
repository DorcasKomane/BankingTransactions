#include "enumtype.h"

EnumType::EnumType()
{

}

QString EnumType::enumToString(transactionType tt)
{
    QString outString;

    switch(tt)
    {
    case 0:
        outString = "Deposit";
        break;

    case 1:
        outString = "Withdrawal";
        break;
    }

    return outString;

}
