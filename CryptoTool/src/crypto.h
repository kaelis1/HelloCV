#ifndef CRYPTO_H
#define CRYPTO_H

#include <string>

class Crypto {
public:
    // 凯撒加密
    static std::string caesarEncrypt(const std::string& text, int key);
    // 凯撒解密
    static std::string caesarDecrypt(const std::string& text, int key);
};

#endif