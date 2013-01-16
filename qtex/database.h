/******************************************************************************
//    Filename  database.h
// Description
//
//  Created on  2013. 1. 16.
//    Revision  none (Version 1.0)
//      Author  Yi, Ho-jun. Contact lbestestl@gmail.com
//
//   Copyright  (C) 2013 Yi, Ho-jun
******************************************************************************/

#ifndef DATABASE_H
#define DATABASE_H


#include <sqlite3.h>
#include <sqlite3ext.h>
#include <string>


class Database {
public:
    explicit Database(std::string fileName);
    ~Database();
    char* queryData(char* query);
    char* queryData(std::string query);

private:
    sqlite3* mydb;
    char* dbErrMsg;
};


#endif // DATABASE_H
