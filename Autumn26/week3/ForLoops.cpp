#include <iostream>

int main(){
    /*
    for(int i =0; i<7; i++){
        std::cout << i << std::endl;
    }

    //x^n
    int n1,n2, result = 1;
    std::cout << "Enter a number and a power: ";
    std::cin >> n1 >> n2;
    for(int i=0; i<n2; i++){
        result = result * n1;
    }
    std::cout << result; */

    //factorial
    int n, result = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for(int i = 1; i < n +1; i++){
        result = result * i;
    }
    std::cout << result;
}