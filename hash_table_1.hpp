#pragma once

#include <string>

class HashTable_1
{
public: 
    void add(const std::string& name, const std::string& phone, const std::string& address);
    void remove(const std::string& name);
    std::string get_phone(const std::string& name);
    std::string get_address(const std::string& name);
};