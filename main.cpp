#include <iostream>
#include <string>
using namespace std;

struct Pipe{
    string name;
    double length = 0;
    double diameter = 0;
    bool inRepair = false;
};

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

    
int main(){
    Pipe pipe;

    int choice = 0 ;
    do {
        cout << "1. Добавить трубу\n2. Добавить КС\n3. Посмотреть объекты\n4. Редактировать трубу\n5. Редактировать КС\n6. Сохранить\n7. Загрузить\n0. Выйти\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "добавление трубы\n";
                readPipe (pipe);
                break;
            case 2:
                cout << "добавление КС\n";
                break;
            case 3:
                cout << "просмотр объектов\n";
                break;
            case 4:
                cout << "редактирование трубы\n";
                break;
            case 5:
                cout << "редактирование КС\n";
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
