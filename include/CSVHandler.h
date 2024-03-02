#ifndef CSVHANDLER_H
#define CSVHANDLER_H

#include <string>
#include <vector>

class CSVHandler {
public:
    std::vector<std::vector<std::string>> readCSV(const std::string& filename);
    void writeCSV(const std::string& filename, const std::vector<std::vector<std::string>>& data);
};

#endif // CSVHANDLER_H