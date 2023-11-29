// ©2023 JDSherbert. All rights reserved.

#include "Stack.h"

Stack::Stack()
: top(nullptr) 
{
}

Stack::~Stack()
{
    while (!isEmpty()) 
    {
        pop(); // Remove all lingering elements in stack
    }
}

void Stack::push(const T& value)
{
    Node<T>* newNode = new Node<T>(value);
    newNode->next = top;
    top = newNode;
}

T Stack::pop()
{
    if (!isEmpty()) 
    {
        Node<T>* temp = top;
        top = top->next;
        return temp;
    } 
    else 
    {
        throw std::out_of_range("Stack is empty");
    }
}

T Stack::peek() const
{
    if (!isEmpty()) 
    {
        return top->data;
    } 
    else 
    {
        throw std::out_of_range("Stack is empty");
    }
}

bool Stack::isEmpty() const
{
    return top == nullptr;
}

size_t Stack::size() const;
{
    size_t count = 0;
    Node<T>* current = top;
    while (current != nullptr) 
    {
        count++;
        current = current->next;
    }
  
    return count;
}
