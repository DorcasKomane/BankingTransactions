#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "transactionlist.h"


class FileWriter
{
public:
    FileWriter(QString fileName);
    bool writeToFile();

private:
    QString fileName;
};

#endif // FILEWRITER_H
