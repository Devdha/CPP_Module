#include <iostream>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of string: " << &brain << std::endl;
    std::cout << "Address held by ptr: " << stringPTR << std::endl;
    std::cout << "Address held by ref: " << &stringREF << std::endl;

    std::cout << "---------------------------------------------" << std::endl;

    std::cout << "Value of string: " << brain << std::endl;
    std::cout << "Value pointed to by ptr: " << *stringPTR << std::endl;  
    std::cout << "Value pointed to by ref: " << stringREF << std::endl;
}