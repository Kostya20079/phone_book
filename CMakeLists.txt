cmake_minimum_required(VERSION 3.30)
project(phone_book)

set(CMAKE_CXX_STANDARD 20)

add_executable(phone_book main.cpp
                Contact.h Contact.cpp
                PhoneBook.h PhoneBook.cpp)
