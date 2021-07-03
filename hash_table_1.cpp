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

Entry* HashTable_1::get_entry(const std::string& name) const
{
    Entry* temp = m_array[hash(name.c_str()) % m_size].entry;
    while (temp != nullptr) 
    {
        if (temp->m_name == name) return temp;
        temp = temp->m_next;
    }

    return nullptr;
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
    Entry* current = m_array[hash(name.c_str()) % m_size].entry;
    Entry* previous = nullptr;
    while (current != nullptr) 
    {
        previous = current;
        if (current->m_name == name) 
        {
            if (previous != nullptr)
            {
                delete previous;
                previous = current;;
            }
            else 
            {
                Entry* temp = m_array[hash(name.c_str()) % m_size].entry->m_next;
                delete m_array[hash(name.c_str()) % m_size].entry;
                m_array[hash(name.c_str()) % m_size].entry = temp;
            }
        }
        current = current->m_next;
    }
    
}
std::string HashTable_1::get_phone(const std::string& name) const
{
    if (auto temp = get_entry(name)) return temp->m_phone;
    return "";
}
std::string HashTable_1::get_address(const std::string& name) const
{
    if (auto temp = get_entry(name)) return temp->m_address;
    return "";
}

HashTable_1::~HashTable_1()
{
    
}
