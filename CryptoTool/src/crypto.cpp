#include "crypto.h"
#include <cctype>  // 用于 isalpha, islower 等函数

std::string Crypto::caesarEncrypt(const std::string& text, int key) {
    std::string result = "";
    
    for (char ch : text) {
        if (isalpha(ch)) {  // 如果是字母
            char base = islower(ch) ? 'a' : 'A';  // 判断大小写
            char encrypted = (ch - base + key) % 26 + base;
            result += encrypted;
        } else {
            result += ch;  // 非字母字符保持不变
        }
    }
    return result;
}

std::string Crypto::caesarDecrypt(const std::string& text, int key) {
    // 解密就是反向加密
    return caesarEncrypt(text, 26 - (key % 26));
}