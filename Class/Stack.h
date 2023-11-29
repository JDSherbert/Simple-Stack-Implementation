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
    Stack();
    ~Stack();

    // Function to push a new element onto the stack
    void push(const T& value);
    // Function to pop the top element from the stack
    T pop();

    // Function to get the top element of the stack without removing it
    T peek() const;

    // Function to check if the stack is empty
    bool isEmpty() const;

    // Function to get the current size of the stack
    size_t size() const;
};
