#ifndef ENUMTYPE_H
#define ENUMTYPE_H

#include <QString>

class EnumType
{
public:
    EnumType();
    enum transactionType {tt_deposit, tt_withdrawal};
    QString enumToString(transactionType tt);
};

#endif // ENUMTYPE_H
