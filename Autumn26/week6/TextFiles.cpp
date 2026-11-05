#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool match = false;
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        for(int j = 0; j < vout.size(); j++){
            if(vin2[i] == vout[j]){
                match = true;
            }
        }
        if(!match){
            vout.push_back(vin2[i]);
        }
        match = false;
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i =0; i < vin1.size(); i++){
        for(int j = 0; j < vin2.size(); j++){
            if(vin1[i] == vin2[j]){
                vout.push_back(vin1[i]);
                j = vin2.size();
            }
        }
    }
}

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::string str;
    for(int i = 0; i < s.size(); i++){
        if(char_to_string(s[i]) != " "){
            str.push_back(s[i]);
        }
    }
    for(int i= 0; i < str.size(); i++){
        if (char_to_string(str[i]) != char_to_string(str[str.size() - 1 - i])){
            return false;
        }
    }
    return true;
}

int main(){
    /*
    std::string InputFileName, OutputFileName;
    std::cout << "Enter an input file name: ";
    std::cin >> InputFileName;
    std::cout << "Enter an output file name: ";
    std::cin >> OutputFileName;
    
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(InputFileName);
    if (infile.is_open()){
        std::string temp;
        std::vector<std::string> v;
        while (infile >> temp){
            v.push_back(temp);
        }
        infile.close();


        outfile.open(OutputFileName);
        for(int i = v.size() - 1 ; i > -1; i--){
            outfile << v[i] << std::endl;
        }
        outfile.close();
    }
    else {
        return EXIT_FAILURE;
    }

    std::ofstream outfile;

    outfile.open("output.txt");
    if(outfile.is_open()){
        outfile << "aroobie" << std::endl;


        outfile.close();
    } 
    else {
        return EXIT_FAILURE;
    }

    //fruit sets
    std::string temp;
    std::ofstream in;
    std::ofstream uni;
    std::ifstream w1;
    std::ifstream w2;
    uni.open("uniont.txt");
    in.open("intersection.txt");
    w1.open("warehouse1.txt");
    w2.open("warehouse2.txt");

    std::vector<std::string>v1;
    std::vector<std::string>v2;
    std::vector<std::string>u;
    std::vector<std::string>inter;
    while(w1 >> temp){
        v1.push_back(temp);
    }
    while(w2 >> temp){
        v2.push_back(temp);
    }

    union_vector(v1,v2,u);
    intersection_vector(v1,v2,inter);

    for(int i = 0; i < u.size(); i++){
        uni << u[i] << std::endl;
    }
    for(int i = 0; i < inter.size(); i++){
        in << inter[i] << std::endl;
    }

    w1.close();
    w2.close();
    uni.close();
    in.close(); */

    //palindrome
    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }

}