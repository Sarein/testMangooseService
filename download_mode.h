#ifndef DOWNLOAD_MODE_H
#define DOWNLOAD_MODE_H

#include <KompexSQLiteDatabase.h>

class DownloadMode
{
public:
    DownloadMode();
    virtual ~DownloadMode();



private:
    Kompex::SQLiteDatabase database;
};

#endif // DOWNLOAD_MODE_H
