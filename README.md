![image](https://github.com/JDSherbert/Threadsafe-Singleton-Class/assets/43964243/8a288a74-0a1e-4fcb-a5d8-608bb7c9d46b)

# Simple Stack Implementation

<!-- Header Start -->
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Simple-Stack-Implementation?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Simple-Stack-Implementation?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Simple-Stack-Implementation?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Simple-Stack-Implementation?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FSimple-Stack-Implementation%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href="https://learn.microsoft.com/en-us/cpp/cpp-language"> 
  <img align="left" alt="C++ Template" src="https://img.shields.io/badge/C++%20Template-black?style=for-the-badge&logo=cpp&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20MIT-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
You can use this Stack class with different types, such as int, double, std::string, or custom types, by specifying the desired type `<T>` when creating an instance of the stack.
```
// Example usage of this stack
Stack<int> intStack;
intStack.push(69);
intStack.push(420);

std::cout << "Size of the stack: " << intStack.size() << std::endl;
std::cout << "Top element: " << intStack.peek() << std::endl;

intStack.pop();
std::cout << "After pop, size of the stack: " << intStack.size() << std::endl;
```

This version of a Stack class uses a linked list with a custom Node structure instead of relying on `std::list` or `std::vector`. The push, pop, peek, isEmpty, and size functions operate on this linked list. The Node structure represents each element in the stack, and the next pointer links the elements together in the stack.


-----------------------------------------------------------------------

