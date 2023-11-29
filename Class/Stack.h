// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <list>
#include <stdexcept>

template <typename T>
class Stack 
{
private:
    std::list<T> elements;

public:
    // Function to push a new element onto the stack
    void push(const T& value) 
    {
        elements.push_back(value);
    }

    // Function to pop the top element from the stack
    void pop() 
    {
        if (!isEmpty()) 
        {
            elements.pop_back();
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
            return elements.back();
        } 
        else 
        {
            throw std::out_of_range("Stack is empty");
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const 
    {
        return elements.empty();
    }

    // Function to get the current size of the stack
    size_t size() const 
    {
        return elements.size();
    }
};
