#ifndef REAL_ZAGAVA_DATABASE_HPP
#define REAL_ZAGAVA_DATABASE_HPP
#include <cstdio>
#include <sqlite3.h>

inline void open_database_file() {
    sqlite3 *zagava_database_file;
    int opening_database_file;
    opening_database_file = sqlite3_open("ZagavaDatabase.db", &zagava_database_file);
    if(opening_database_file ){
        printf("Cannot open database: %s\n", sqlite3_errmsg(zagava_database_file));
    } else {
        printf("Open database sucessfully");
    }
    sqlite3_close(zagava_database_file);
}

inline void

inline void close_database_file(sqlite3 *zagava_database_file) {
    sqlite3_close(zagava_database_file);
}


#endif
