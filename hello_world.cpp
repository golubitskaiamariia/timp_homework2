#include <iostream>
#include <string>
int main() {
    std::string name;  // Создаем переменную имени пользователя
    std::cout << "Enter your name: ";  // Запрашиваем имя пользователя
    std::cin >> name; // Получаем имя пользователя
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
