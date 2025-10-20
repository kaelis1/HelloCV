#include "file_handler.h"
#include <fstream>
#include <iostream>

bool FileHandler::readFile(const std::string& path, std::string& content) {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cout << "错误：无法打开文件 " << path << std::endl;
        return false;
    }
    
    std::string line;
    content = "";
    while (getline(file, line)) {
        content += line + "\n";
    }
    file.close();
    return true;
}

bool FileHandler::writeFile(const std::string& path, const std::string& content) {
    std::ofstream file(path);
    if (!file.is_open()) {
        std::cout << "错误：无法创建文件 " << path << std::endl;
        return false;
    }
    
    file << content;
    file.close();
    return true;
}