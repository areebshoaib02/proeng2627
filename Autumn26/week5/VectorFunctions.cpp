#include <iostream>
#include <vector>

int MinVectorElement (const std::vector <double>& vin){
    if(vin.empty()){
        return -1;
    }
    else{
        int MinIndex = 0;
        for(int i = 0; i < vin.size(); i ++){
            if(vin[i] < vin[MinIndex]){
                MinIndex = i;
            }
        }
        return MinIndex;
    }
}

int SearchVector (int n , const std::vector <double>& vin){
    for(int i = 0; i < vin.size(); i ++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

void AppendVectors (const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i =0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main (){
    std::vector <double> v1 = {1,7,3,4}, v2 = {2,-2,19}, v;
    filter_v(v1, 5,v);
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i];
    }
}