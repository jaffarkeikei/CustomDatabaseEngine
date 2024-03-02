#ifndef DATABASEENGINE_H
#define DATABASEENGINE_H

#include "CSVHandler.h"
#include <string>

class DatabaseEngine {
private:
    CSVHandler csvHandler;
public:
    void createTable(const std::string& tableName);
    void insertInto(const std::string& tableName, const std::vector<std::string>& data);
    // TODO: SELECT, UPDATE, DELETE
};

#endif // DATABASEENGINE_H