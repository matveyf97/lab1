#include <iostream>

using namespace std;
int main(){
    int choice = 00 ;
    do {
        cout << "1. Добавить трубу\n2. Добавить КС\n3. Посмотреть объекты\n4. Редактировать трубу\n5. Редактировать КС\n6. Сохранить\n7. Загрузить\n0. Выйти\n";
        cin >> choice;
        cout << choice << "\n";
    } while(choice !=0);
}
