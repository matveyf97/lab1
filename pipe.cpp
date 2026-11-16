#include "pipe.hpp"
#include <iostream>
#include "utils.hpp"

using namespace std;

bool readPipe(Pipe& pipe){
        cout << "введите название трубы\n";
        if (!getline(cin >> ws, pipe.name)){
            return false;
        };
        cout << "введите длину трубы\n";
        if (!readDouble(pipe.length)){
            return false;   
        }
        while (pipe.length <= 0){
            cout << "длина трубы должна быть положительным числом и больше 0\n";
            if (!readDouble(pipe.length)){
                return false; 
            }
        }
        cout << "введите диаметр трубы\n";
        if (!readDouble(pipe.diameter)){
            return false;   
        }
                while (pipe.diameter <= 0){
            cout << "диаметр трубы должна быть положительным числом и больше 0\n";
            if (!readDouble(pipe.diameter)){
                return false; 
            }
        }
        int orz = -1;
        while (orz != 1 && orz != 0){
            cout << "введите состояние трубы\n1 - труба в ремонте\n0 - труба работает\n";
            if (!readInt(orz)){
                return false;
            }
        }
        pipe.inRepair = (orz == 1);
        return true;
        
        }
    
