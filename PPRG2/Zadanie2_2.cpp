#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int i;
    int j;

    cout << "Podaj liczbę a: ";
    cin >> a;

    cout << endl << "Podaj liczbę b: ";
    cin >> b;

    cout << endl << "Wiersz o dlugosci a:" << endl;

    for (i = 1; i <= a; i++){
        cout << "*";
    }

    cout << endl << "Kolumna o dlugosci b:" << endl;

    for (i = 1; i <= b; i++){
        cout << "*" << endl;
    }

    cout << endl << "Prostokat gwiazdek o wymiarach a na b:" << endl;

    for (i = 1; i <= a; i++){

        for (j = 1; j <= b; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Obwod prostokatu o wymiarach a na b:" << endl;

    for (i = 1; i <= a; i++){

        for (j = 1; j <= b; j++){
            if(i == 1){
                for (j = 1; j <= b; j++){
                    cout << "*";
                }
                cout << endl;
                j = 1;
                break;
            }else if(i == a){
                for (j = 1; j <= b; j++){
                    cout << "*";
                }
                cout << endl;
                j = a;
                break;
            }else{
                for (j = 1; j <= b; j++){
                    if (j == 1){
                        cout << "*";
                        continue;
                    }else if(j == b){
                        cout << "*" << endl;
                        continue;
                    }else{
                        cout << " ";
                        continue;
                    }
                }
                break;
            }
        }
    }
    return 0;
}