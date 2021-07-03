#include "hash_table_1.hpp"
#include "bucket.hpp"

#include <iostream>

unsigned long hash(const char* str)
{
    unsigned long hash = 5381;
    int c;
    while (c = *str++)
    {
        hash = ((hash << 5) + hash) + c;
    }
    return hash;
}

HashTable_1::HashTable_1(std::size_t size) : m_size(size)
{
    m_array = new Bucket[m_size];
}

void HashTable_1::add(const std::string& name, const std::string& phone, const std::string& address)
{
    std::size_t index = hash(name.c_str()) % m_size; 
    if (m_array[index].entry == nullptr)
    {
        m_array[index].entry = new Entry(name, phone, address);
        return; 
    }
    Entry* temp = m_array[index].entry;
    while (temp->m_next != nullptr)
    {
        temp = temp->m_next;
    }
    temp->m_next = new Entry(name, phone, address);
}
void HashTable_1::remove(const std::string& name)
{

}
std::string HashTable_1::get_phone(const std::string& name) const
{
    Entry* temp = m_array[hash(name.c_str()) % m_size].entry;
    std::cout << temp << std::endl;
    std::cout << hash(name.c_str()) % m_size << std::endl;
    std::cout << "before while" << std::endl;
    while (temp != nullptr) 
    {
        std::cout << "in while before if" << std::endl;
        if (temp->m_name == name) break;
        std::cout << "in while after if" << std::endl;
        temp = temp->m_next;
    }
    return temp->m_phone;
}
std::string HashTable_1::get_address(const std::string& name) const
{
    return "";
}
