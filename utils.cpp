#include "utils.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

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
            cout << "введите целое число\n";
        }
    }
    
}

bool readDouble(double& value){
    while (true)
    {
        string line;
        if (!getline(cin, line)){
            return false;
        }
        istringstream input(line);
        double number;
        char extra;
        if((input >> number) && !(input >> extra)){
            value = number;
            return true;
        }
        else{
            cout << "введите число\n";
        }
    }
    
}

bool validName(const string& name){
    return name.find_first_not_of(" \n\t\v\r\f") != string::npos && name.find_first_of("\r\n") == string::npos;
}

bool readName(string& name){
    string line;
    while (getline(cin, line)){
        if (validName(line)){
            name = line;
            return true;
        }
        cout << "введите непустое название\n";
    }
    return false;
}