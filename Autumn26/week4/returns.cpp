#include <iostream>

int SmallestFactor (int n){
    int factor = n;
    for(int i = n; i > 1; i--){
        if(n%i == 0){
            factor = i;
        }
    }
    return factor;
}

void PrimesInARange(int start, int end){
    for(start; start < end+1; start++){
        if(start == SmallestFactor(start)){
            std::cout << start << std::endl;
        }
    }
}

int main(){
    PrimesInARange(12, 23);
}