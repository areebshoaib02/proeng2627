#include <iostream>
#include <string>

int main(){
    /*
    //task 2.1
    int num, absv;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num<  0){
        num = -num;
    }
    std::cout << "absolute value: " << num << std::endl;

    //leap year
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (year % 4 == 0){
        if(year % 100 == 0){
            std::cout << "not a leap year";
        } else {
            std::cout << "is a leap year";
        }
    } else {
        std::cout << "not a leap year";
    }
    
    */
    //temperature converter
    double input;
    std::string unit;
    std::cout << "Enter a temperature and its unit: ";
    std::cin >> input >> unit;
    if ((unit == "f") || (unit == "F")){
        std::cout << ((input - 32) * 5)/9 << " C" << std::endl;
    } else if ((unit == "c") || (unit == "C")) {
        std::cout << ((input * 9)/5) + 32 << " F" << std::endl;
    } else {
        std::cout << "ERROR unit is not recognised";
    }
}