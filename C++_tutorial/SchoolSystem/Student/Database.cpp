#include <iostream>
#include <cstdlib>
#include <sqlite3.h>

using namespace std;

class Database
{
private:
    sqlite3 *db;
    const char *filename;
    char *zErrMsg = 0;
    int rc;
    const char *sql;

public:
    Database(const char *filename, const char *sql)
    {
        this->filename = filename;
        this->sql = sql;
    }
    int db_open();
    int db_exec();
    static int callback(void *NotUsed, int argc, char **argv, char **azColName)
    {
        int i;
        for (i = 0; i < argc; i++)
        {
            printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
        }
        printf("\n");
        return 0;
    }
};

int Database::db_open()
{
    rc = sqlite3_open(filename, &db);
    if (rc)
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }
    else
    {
        fprintf(stderr, "Opened database successfully\n");
    }
    return rc;
}

int Database::db_exec() {
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else
    {
        fprintf(stdout, "Table created successfully\n");
    }
    sqlite3_close(db);
    return rc;
}