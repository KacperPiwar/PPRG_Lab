#include <iostream>
using namespace std;

int main(){
    int month;
    cout << "Podaj miesiac: ";
    cin >> month;

    switch (month){
        case 1:
            cout << "Styczen" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            cout << "Dni: 28" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;        
        case 4:
            cout << "Kwiecien" << endl;
            cout << "Dni: 30" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 5:
            cout << "Maj" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 6:
            cout << "Czerwiec" << endl;
            cout << "Dni: 30" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 7:
            cout << "Lipiec" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 8:
            cout << "Sierpien" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 9:
            cout << "Wrzesien" << endl;
            cout << "Dni: 30" << endl;
            cout << "Jest to miesiac sloneczny" << endl;
            break;        
        case 10:
            cout << "Pazdziernik" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;        
        case 11:
            cout << "Listopad" << endl;
            cout << "Dni: 30" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;        
        case 12:
            cout << "Grudzien" << endl;
            cout << "Dni: 31" << endl;
            cout << "Jest to miesiac pochmurny" << endl;
            break;        
        default:
            cout << "Nie ma takiego miesiaca" << endl;
    }
    return 0;
}