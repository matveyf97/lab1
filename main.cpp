#include <iostream>
#include <string>
#include <sstream>
#include "pipe.hpp"
#include "utils.hpp"
#include "station.hpp"
using namespace std;




int main(){
    Pipe pipe;
    Station station;
    int choice = 0 ;
    do {
        cout << "1. Добавить трубу\n2. Добавить КС\n3. Посмотреть объекты\n4. Редактировать трубу\n5. Редактировать КС\n6. Сохранить\n7. Загрузить\n0. Выйти\n";
        if (!readInt(choice)){
            return 0;
        }
        switch (choice) {
            case 1:
                if (!pipe.name.empty()) {
                    cout << "труба уже добавлена\n";
                } else if (!readPipe(pipe)) {
                    return 0;
                }
                break;
            case 2:
                if (!station.name.empty()) {
                    cout << "КС уже добавлена\n";
                } else if (!readStation(station)){
                    return 0;
                }
            case 3:
                if (pipe.name.empty()){
                    cout << "труба еще не добавлена\n";
                }
                else {
                    showPipe(pipe);
                }
                if(station.name.empty()){
                    cout << "КС еще не добавлена\n";
                }else{
                    showStation(station);
                }
                break;
            case 4:
                if (pipe.name.empty()) {
                    cout << "сначала добавьте трубу\n";
                } else if (!editPipe(pipe)) {
                    return 0;
                }
                break;
            case 5:
                if(station.name.empty()){
                    cout << "КС еще не добавлена\n";
                }else if (!editStation(station)) { 
                    return 0;
                }
                break;
            case 6:
                cout << "сохранение\n";
                break;
            case 7:
                cout << "загрузка\n";
                break;
            case 0:
                cout << "выход\n";
                break;
            default:
                cout << "нет такого пункта\n";
                break;

                }
    } while(choice !=0);
}
