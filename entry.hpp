#pragma once

#include <string>

class Entry
{
public:
    Entry(const std::string& name, const std::string& phone, const std::string& address) 
        : m_name(name), m_phone(phone), m_address(address), m_next(nullptr)
    {}
    std::string m_name;
    std::string m_phone;
    std::string m_address;
    Entry* m_next;
};