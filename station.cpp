#include "station.hpp"
#include <iostream>
#include "utils.hpp"

using namespace std;


bool readStation(Station& station){ 
        Station newStation;
        cout << "введите название КС\n";
        if (!readName(newStation.name)){
            return false;
        }
        do{
            cout << "введите кол-во цехов больше 0\n";
            if (!readInt(newStation.totalWorkshops)){
                return false;
            }
        } while (newStation.totalWorkshops <= 0 );
        do {
            cout << "введите кол-во цехов в работе не меньше 0 и не больше" << newStation.totalWorkshops << "\n";
            if (!readInt(newStation.activeWorkshops)){
                return false;
            } 
        }while (newStation.activeWorkshops < 0 || newStation.activeWorkshops > newStation.totalWorkshops);
        do {    
            cout << "введите класс KC больше 0\n";
            if (!readInt(newStation.stationClass)){
                return false;
            }

        }while (newStation.stationClass <= 0);
        station = newStation;
        return true;

        }

void showStation(const Station& station){
    cout << "КС: " << station.name << '\n' << "в работе: " << station.activeWorkshops << " из " << station.totalWorkshops << '\n' << "класс: " << station.stationClass << '\n';
    }

bool editStation(Station& station){
    int action;
    do { 
        cout << "1 - запустить цех, 2 - остановить цех, 0 - назад\n";
        if (!readInt(action)) { 
            return false;
        }
    } while (action < 0 || action > 2);
    if (action == 1){
        if (station.activeWorkshops < station.totalWorkshops){
        ++station.activeWorkshops;
        cout << "цех запущен\n";

    } else {
        cout << "все цеха уже работают\n";
        } 
    } else if (action == 2){
        if (station.activeWorkshops > 0){
            --station.activeWorkshops;
            cout << "остановлен цех\n";
        } else {
            cout << "все цеха уже остановлены\n";
        }
    }
    return true;
}
