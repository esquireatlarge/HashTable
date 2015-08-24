//Esquire At Large
//Implementation of a singly linked list
//Taken from Linked List repo

#include "Item.h"

template <class T>

class LinkedList
{
public:
    LinkedList()
        : m_head(nullptr)
    {
    }

    ~LinkedList()
    {
        //Remove all nodes from the linked list.
        Item<T>* runner = m_head;
        while (runner)
        {
            Item<T>* tmp = runner;
            runner = runner->GetNext();

            delete tmp;
        }
    }

    //This function will insert at the end of the list.  THIS IS NOT SORTED.
    //Additionally this function doesn't check for duplicates.
    void Insert(T value)
    {
        if (!m_head)
            m_head = new Item<T>(value);
        else
        {
            Item<T>* runner = m_head;
            while (runner->next) runner = runner->GetNext();
            runner->SetNext(new Item<T>(value));

        }
    }

    void Reverse()
    {

    }

private:

    Item<T>* m_head;

};