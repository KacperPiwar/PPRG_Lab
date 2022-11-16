#include <iostream>
using namespace std;

int main(){
    char znak;

    //pierwsze podanie znaku
    cout << "Podaj znak z klawiatury: ";
    cin >> znak;
    cout << endl;

    //petla sprawdzajaca czy znak to t, jesli nie wypisuje znak i prosi o podanie nastepnego
    while (znak != 't'){
        cout << "Podany znak to: " << znak << endl << endl;

        if (znak != 't'){
            cout << "Podaj nastepny znak z klawiatury: ";
            cin >>znak;
            cout << endl;
        }
    }
        
    cout << "Podany znak to: t" << endl << endl;

    return 0;
}