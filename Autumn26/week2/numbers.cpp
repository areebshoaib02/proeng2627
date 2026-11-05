#include <iostream>

int main(){
    //rectangles
    double length, width;
    std::cout << "length: ";
    std::cin >> length;
    std::cout << "width ";
    std::cin >> width;
    std::cout << "Area is " << length*width << "cm^2 and perimetre is " << 2*(length+width) << std::endl; 

    //currency exchange
    double pounds;
    std::cout << "enter pounds: ";
    std::cin >> pounds;
    std::cout << "euros: " << pounds*1.19 << std::endl;

    // temperature conversion
    double celsius;
    std::cout << "enter celsius: ";
    std::cin >> celsius;
    std::cout << "fahrenheit: " << (celsius*9/5)+32 << std::endl;

    //BMI
    double weight, height;
    std::cout << "enter weight in kg: ";
    std::cin >> weight;
    std::cout << "enter height in m: ";
    std::cin >> height;
    std::cout << "BMI is " << weight/(height*height) << std::endl;
}    