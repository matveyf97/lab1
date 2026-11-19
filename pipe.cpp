#include "pipe.hpp"
#include <iostream>
#include "utils.hpp"

using namespace std;

bool readPipe(Pipe& pipe){
        Pipe newPipe;
        cout << "введите название трубы\n";
        if (!readName(newPipe.name)){
            return false;
        };
        do{
            cout << "введите длину трубы в км больше 0\n";
            if (!readDouble(newPipe.length)){
                return false;
            }
        } while (newPipe.length <= 0 );
        do{
            cout << "введите диаметр трубы в мм больше 0\n";
            if (!readDouble(newPipe.diameter)){
                return false;
            }
        } while (newPipe.diameter <= 0 );
        if (!editPipe(newPipe)){
            return false;
        }
        pipe = newPipe;
        return true;
    }

void showPipe(const Pipe& pipe) {
    cout << "труба: " << pipe.name << '\n'
         << "длина: " << pipe.length << " км\n"
         << "диаметр: " << pipe.diameter << " мм\n"
         << "состояние: " << (pipe.inRepair ? "в ремонте" : "работает") << '\n';
}

bool editPipe(Pipe& pipe){
    int repair;
    do {
        cout << "1 - труба в ремонте, 0 - труба работает\n";
        if (!readInt(repair)) {
            return false;
        }
    } while (repair != 0 && repair != 1);
    pipe.inRepair = (repair == 1);
    return true;

}