#pragma once

#include "bucket.hpp"

#include <string>

class HashTable_1
{
public: 
    HashTable_1(std::size_t size);
    void add(const std::string& name, const std::string& phone, const std::string& address);
    void remove(const std::string& name);
    std::string get_phone(const std::string& name) const;
    std::string get_address(const std::string& name) const;
    std::string get_name(const std::string& phone) const;
    ~HashTable_1();
private:
    Entry* get_entry(const std::string& name) const;
    void remove_bucket(Bucket bucket);
    void remove_entry(Entry* entry);

    Bucket* m_array;
    std::size_t m_size;
};