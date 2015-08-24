//Esquire At Large
//Represents an item storable within a linked list.
//Taken from Linked List repo.

template <class T>
class Item
{
public:

    Item(T data)
        : m_data(data), m_next(nullptr)
    {
    }

    inline T GetData(){ return m_data };
    inline Item<T>* GetNext(){ return m_next; }
    void SetNext(Item<T>* n){ m_next = n; }

private:
    T        m_data;
    Item<T>* m_next;
};