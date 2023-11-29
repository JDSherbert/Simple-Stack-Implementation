// ©2023 JDSherbert. All rights reserved.

#pragma once

template <typename T>
struct Node 
{
    T data;
    Node* next;

    Node(const T& value)
    : data(value)
    , next(nullptr) 
    {
    }
};
