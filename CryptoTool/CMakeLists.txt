cmake_minimum_required(VERSION 3.10)
project(CryptoTool)
set(CMAKE_CXX_STANDARD 11)
include_directories(src)
add_executable(CryptoTool
    src/main.cpp
    src/crypto.cpp
    src/file_handler.cpp
    src/menu.cpp
)