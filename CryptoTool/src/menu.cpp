#include "menu.h"
#include "crypto.h"
#include "file_handler.h"
#include <iostream>
#include <string>

void Menu::showMainMenu() {
    std::cout << "\n=== 文本加密解密工具 ===\n";
    std::cout << "1. 文本加密\n";
    std::cout << "2. 文本解密\n";
    std::cout << "3. 文件加密\n";
    std::cout << "4. 文件解密\n";
    std::cout << "0. 退出\n";
    std::cout << "请选择功能: ";
}

void Menu::run() {
    int choice;
    
    while (true) {
        showMainMenu();
        std::cin >> choice;
        
        switch (choice) {
            case 1: { // 文本加密
                std::string text;
                int key;
                std::cout << "请输入要加密的文本: ";
                std::cin.ignore();  // 清除输入缓冲区
                std::getline(std::cin, text);
                std::cout << "请输入密钥: ";
                std::cin >> key;
                
                std::string encrypted = Crypto::caesarEncrypt(text, key);
                std::cout << "加密结果: " << encrypted << std::endl;
                break;
            }
            
            case 2: { // 文本解密
                std::string text;
                int key;
                std::cout << "请输入要解密的文本: ";
                std::cin.ignore();
                std::getline(std::cin, text);
                std::cout << "请输入密钥: ";
                std::cin >> key;
                
                std::string decrypted = Crypto::caesarDecrypt(text, key);
                std::cout << "解密结果: " << decrypted << std::endl;
                break;
            }
            
            case 3: { // 文件加密
                std::string inputPath, outputPath;
                int key;
                std::cout << "请输入要加密的文件路径: ";
                std::cin >> inputPath;
                std::cout << "请输入密钥: ";
                std::cin >> key;
                std::cout << "请输入输出文件路径: ";
                std::cin >> outputPath;
                
                std::string content;
                if (FileHandler::readFile(inputPath, content)) {
                    std::string encrypted = Crypto::caesarEncrypt(content, key);
                    if (FileHandler::writeFile(outputPath, encrypted)) {
                        std::cout << "文件加密成功！结果保存在: " << outputPath << std::endl;
                    }
                }
                break;
            }
            
            case 4: { // 文件解密
                std::string inputPath, outputPath;
                int key;
                std::cout << "请输入要解密的文件路径: ";
                std::cin >> inputPath;
                std::cout << "请输入密钥: ";
                std::cin >> key;
                std::cout << "请输入输出文件路径: ";
                std::cin >> outputPath;
                
                std::string content;
                if (FileHandler::readFile(inputPath, content)) {
                    std::string decrypted = Crypto::caesarDecrypt(content, key);
                    if (FileHandler::writeFile(outputPath, decrypted)) {
                        std::cout << "文件解密成功！结果保存在: " << outputPath << std::endl;
                    }
                }
                break;
            }
            
            case 0: // 退出
                std::cout << "感谢使用！再见！" << std::endl;
                return;
                
            default:
                std::cout << "无效选择，请重新输入！" << std::endl;
        }
    }
}