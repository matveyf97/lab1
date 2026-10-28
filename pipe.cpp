#include "pipe.hpp"
#include <iostream>

using namespace std;

void readPipe(Pipe& pipe){
        cout << "введите название трубы\n";
        getline(cin >> ws, pipe.name);
        cout << "введите длину трубы\n";
        cin >> pipe.length;
        cout << "введите диаметр трубы\n";
        cin >> pipe.diameter;
        int orz = -1;
        while (orz != 1 && orz != 0){
            cout << "введите состояние трубы\n1 - труба в ремонте\n0 - труба работает\n";
            cin >> orz;}
        pipe.inRepair = (orz == 1);
        }
    
