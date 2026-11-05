#include <iostream>

int main(){
    /*
    int n, m;
    int sum = 0;
    int i = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Enter a number: ";
    std::cin >> m;
    while (i < m){
        sum = sum + n;
        i ++;
    }
    std::cout << "The sum is: " << sum << std::endl;   
    
    
    // echo 
    bool stop = false;
    std::string input;
    std::cout << "enter input: ";
    std::cin >> input;
    while (!stop){
        if((input == "STOP")|| (input == "stop")){
            stop = true;
        } else {
            std::cout << input << std::endl;
            std::cout << "You entered: " << input << std::endl;
            std::cout << "enter input: ";
            std::cin >> input;
        }
    }

    int input;
    std::cout << "enter input: ";
    std::cin >> input;
    while (-11< input && input < 11){
        std::cout << input << std::endl;
        std::cout << "You entered: " << input << std::endl;
        std::cout << "enter input: ";
        std::cin >> input;
    } 

    //sum so far
    int n, sum = 0;
    while (true){
        std::cout << "Enter a number:";
        std::cin >> n;
        sum = sum + n;
        std::cout << "the sum so far is: " << sum << std::endl;
    }

    //average so far
    double n, avg = 0;
    int count = 0;
    while (true){
        std::cout << "Enter a number:";
        std::cin >> n;
        avg = ((avg *count) + n)/ (count+ 1);
        std::cout << "the average so far is: " << avg << std::endl;
        count++;
    } */

    //division as repeated subtraction
    int n1, n2, quo = 0, rem;
    bool run = true;
    std::cout << "Enter a number: ";
    std::cin >> n1;
    std::cout << "Enter a number to divide that by: ";
    std::cin >> n2;
    while (run){
        if(n1>= n2){
            std::cout << n1 << " - " << n2 << " = " << (n1-n2) <<std::endl;
            n1 = n1 - n2;
            quo++;
            std::cout << quo << " subtractions" << std::endl;
        } 
        else {
            rem = n1;
            run = false;
        }
    }
    std::cout << "The quoteint is " << quo << " leavig a remainder of " << rem;

}