#include <iostream>

int main(){
    int n;
    std::cout<< "Enter a number: ";
    std::cin >> n;
    for (int n1 = 1; n1 <= n; n1++){
        for (int n2 = 1; n2 <= n; n2++){
            std::cout << n1*n2 << " ";
        }
        std::cout << std::endl;
    }
}