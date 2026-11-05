#include <iostream>
#include <string>

int main(){
    std::string name;
    std::string surname;
    std::cout << "Enter name: ";
    std:: cin >> name;
    std::cout << "Enter surname ";
    std::cin >> surname;
    std::cout << "hello " + name + " " + surname << std::endl;
}