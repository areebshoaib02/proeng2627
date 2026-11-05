#include <iostream>
#include <cmath>

double absolute(double x);

double exponent (int x, int n){
    double ans = 1;
    if (n < 0){
        for(int i = 0; i > n; i--){
        ans = ans / x;
        }
    }    
    else {
        for(int i = 0; i < n; i++){
        ans = ans * x;
        }
    }
    return ans;
}

bool LeapYear (int year){
    if(year % 400 ==0){
        return true;
    }
    else if (year % 100 == 0){
        return false;
    }
    else if (year % 4 == 0){
        return true;
    }
    else {
        return false;
    }
}

int Max2(int n1, int n2){
    if(n1> n2){
        return n1;
    }
    else{
        return n2;
    }
}

int Max3(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if (n2 > n1 && n2 > n3){
        return n2;
    }
    else if (n3 < n1 && n3 < n2){
        return n1;
    } 
    else{
        return n3;
    }
}

int SumOfPowers(int x, int n){
    int ans = 0;
    for(int i =1; i <=n; i++){
        ans = ans + exponent(x, i);
    }
    return ans;
}

int main (){
    std::cout << Max3(51,51,5);
}

double absolute (double x){
    if(x<0){
        x = -x;
    }
    return x;
}