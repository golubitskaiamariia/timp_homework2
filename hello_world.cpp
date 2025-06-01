#include <iostream>
#include <string>
int main() {
    std::string name;  // Create variable
    std::cout << "Enter your name: ";  // Request value variable
    std::cin >> name; // Get value variable
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
