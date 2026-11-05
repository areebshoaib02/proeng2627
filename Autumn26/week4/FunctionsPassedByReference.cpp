#include <iostream>

void swap (int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void sort(int& n1, int& n2){
    if (n2 > n1){
        swap(n1,n2);
    }
}

void Rectangle(double n1, double n2, double& area, double& perimeter){
    area = n1*n2;
    perimeter = 2*(n1+n2);
}

void divide(int n1, int n2, int& quo, int& rem){
    quo = n1/n2;
    rem = n1%n2;
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

void NextDate(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if (d2 > 31 && m2 == 12){
        d2 = 1;
        m2 = 1;
        y2 = y1 + 1;
    }
    if (m1 == 2){
        if (d2 > 29){
            d2 = 1;
            m2 = 3;
        }
        else if (!LeapYear(y1) && d2 >28){
            d2 = 1;
            m2 = 3;
        }
    }
    if ((d2 > 31) && (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10)){
        d2 = 1;
        m2 = m2 + 1;
    }
    if ((d2 > 30) && (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11)){
        d2 = 1;
        m2 = m2 + 1;
    }
}

int main (){
    int d2,m2,y2;
    NextDate(12,4,2020,d2,m2,y2);
    std::cout << "Next date is: " << d2 << "/" << m2 << "/" << y2 << std::endl;
}