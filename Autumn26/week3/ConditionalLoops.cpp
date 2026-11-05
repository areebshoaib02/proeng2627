#include <iostream>
#include <string>

int main(){
    //number guesser
    int num, min = 0, max = 100;
    bool run = true;
    std::string ans;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> num;
    while (run){
        std::cout << "Is your number " << (min + max)/2 << std::endl;
        std::cin >> ans;
        if (ans == "y"){
            run = false;
            std::cout << "Your number is " << (min + max)/2 << std::endl;
        }
        else {
            std::cout << "Is your number greater than " << (min + max)/2 << " (y/n): ";
            std::cin >> ans;
            if (ans == "y"){
                min = ((min + max)/2) + 1;
            }
            else {
                max = ((min + max)/2) - 1;
            }
        }
    }
}