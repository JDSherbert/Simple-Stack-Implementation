// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <stdexcept>
#include "Node.h"

class Node;

template <typename T>
class Stack 
{
private:
    Node<T>* top;

public:
    Stack() 
    : top(nullptr) 
    {
    }

    ~Stack() 
    {
        while (!isEmpty()) 
        {
            pop(); // Remove all lingering elements in stack
        }
    }

    // Function to push a new element onto the stack
    void push(const T& value) 
    {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
    }

    // Function to pop the top element from the stack
    T pop() 
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

    // Function to get the top element of the stack without removing it
    T peek() const 
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

    // Function to check if the stack is empty
    bool isEmpty() const 
    {
        return top == nullptr;
    }

    // Function to get the current size of the stack
    size_t size() const 
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
};
