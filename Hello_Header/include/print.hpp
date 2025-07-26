#ifndef PRINTCLASS_H
#define PRINTCLASS_H
#include <iostream>
class printclass
{
public:
    // Constructor
    printclass(); 
    ~printclass() = default;

    // Method to print a message
    void printMessage(const std::string& message);
};

#endif // PRINTCLASS_H