#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T value;
    Node* prev, * next;
    // prev and next pointers to point to the previous and next element in the deque.
};


template <typename T>
class Deque
{
    Node<T>* front;
    Node<T>* rear;
    int Size;
    

public:
    Deque<T>()
    {
        front = rear = NULL;
        Size = 0;
    }

    // Operations/Functionalities on Deque.
    void insertFront(T value);
    void insertRear(T value);
    void deleteFront();
    void deleteRear();
    T getFront();
    T getRear();
    int size();
    bool isEmpty();
    Node* createnode(T value) // function to create a new node
    {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    }
};
