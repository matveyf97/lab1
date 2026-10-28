#include "utils.hpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool readInt(int& value){
    while (true)
    {
        string line;
        if (!getline(cin, line)){
            return false;
        }
        istringstream input(line);
        int number;
        char extra;
        if((input >> number) && !(input >> extra)){
            value = number;
            return true;
        }
        else{
            cout << "введите целое число";
        }
    }
    
}