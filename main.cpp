#include <iostream>

using namespace std;
int main(){
    int choice = 00 ;
    do {
        cout << "1. Добавить трубу\n2. Добавить КС\n3. Посмотреть объекты\n4. Редактировать трубу\n5. Редактировать КС\n6. Сохранить\n7. Загрузить\n0. Выйти\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "добавление трубы\n";
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
