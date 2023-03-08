#include <iostream>
#include <cstdlib>
#include <sqlite3.h>

using namespace std;


class Database {
    private:
        sqlite3 *db;
        const char* filename;
        char *zErrMsg = 0;
        int rc;
        const char *sql;

    public:
        Database(const char* filename){
            this->filename = filename;
        } 
        int db_open();
};

int Database::db_open() {
    rc = sqlite3_open(filename, &db);
    return rc;
}