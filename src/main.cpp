#include "DatabaseEngine.h"
#include <iostream>

int main() {
    DatabaseEngine dbEngine;
    
    dbEngine.createTable("students.csv");
    dbEngine.insertInto("students.csv", {"Jaffar Keikei", "Computer Science"});
    
    std::cout << "Database operations completed." << std::endl;
    return 0;
}