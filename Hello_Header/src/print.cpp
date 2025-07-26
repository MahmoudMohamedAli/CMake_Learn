#include "print.hpp"
// Method to print a message
void printclass::printMessage(const std::string& message) 
{
   std::cout << "Hello from print function " << std::endl;
}

printclass::printclass() {
    // Constructor implementation (if needed)
    std::cout << "Print class created." << std::endl;
}