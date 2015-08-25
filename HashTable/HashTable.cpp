//Esquire At Large
//Definitions of a Hash Table

#include "HashTable.h"

HashTable::HashTable(int size)
{
    if (size <= 0)
        m_size = 11;

    m_lists = new LinkedList<std::string>[m_size];
}

HashTable::~HashTable()
{
}

int HashTable::Hash(std::string key)
{
    int value = 0;
    int sLen = key.length();
    for (int i = 0; i < sLen; i++)
        value += key.at(i);

    return (value * key.length()) % m_size;
}

void HashTable::Add(std::string value)
{
    int index = Hash(value);
    m_lists[index].Insert(value);
}

bool HashTable::Remove(std::string value)
{
    int index = Hash(value);
    //Remove from list
    //m_lists[index].Remove(value)

    return false;
}

Item<std::string>* HashTable::GetItem(std::string key)
{
    int index = Hash(key);
    //return m_lists[index].Get(key);

    return NULL;
}