//Esquire At Large
//Implementation of a hash table using Strings

#include "LinkedList.h"
#include <string>

class HashTable
{
public:
    HashTable(int size = 11);

    inline int GetSize() { return m_size; }

    void Add(std::string value);

    bool Remove(std::string key);

    Item<std::string>* GetItem(std::string key);

    int GetItemCount();

    void Histogram();

private:
    
    int m_size;

    LinkedList<std::string>* m_lists;

    int Hash(std::string key);
};