#include <iostream>
#include <vector>

int threeElements(int a, int b, int c){
    std::vector <int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    std::cout << v[0] + (v[1]*v[2]) << std::endl;
    return v[0] + (v[1]*v[2]);
}

int main(){
    /*
    int n,m,t;
    std::vector <int> v;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "Enter a number: " << std::endl;
    std::cin >> t;
    for(int i = 0; i < n; i ++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }*/

    int n,m,t,occurences = 0;
    std::vector <int> v, occ;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "Enter a number: " << std::endl;
    std::cin >> t;
    for(int i = 0; i < n; i ++){
        if(v[i] == t){
            occurences++;
            occ.push_back(i);
        }
    }
    std::cout << "The number of occurrences of " << t << " is: " << occurences << " at indicies " << std::endl;
    for(int i = 0; i < occurences; i++){
        std::cout << occ[i] << std::endl;
    }
}