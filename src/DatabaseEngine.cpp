#include "DatabaseEngine.h"

void DatabaseEngine::createTable(const std::string& tableName) {
    // An empty file for the table
    csvHandler.writeCSV(tableName, {});
}

void DatabaseEngine::insertInto(const std::string& tableName, const std::vector<std::string>& data) {
    // Insert a single row into the table
    auto tableData = csvHandler.readCSV(tableName);
    tableData.push_back(data);
    csvHandler.writeCSV(tableName, tableData);
}