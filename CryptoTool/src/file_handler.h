#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>

class FileHandler {
public:
    static bool readFile(const std::string& path, std::string& content);
    static bool writeFile(const std::string& path, const std::string& content);
};

#endif