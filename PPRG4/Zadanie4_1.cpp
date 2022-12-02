#include <iostream>
using namespace std;

int main(){

    //Definicja zmiennych oraz podanie wymiarow tablicy przez uzytkownika
    int wiersze;
    int kolumny;

    cout << "Podaj liczbe wierszy tablicy: ";
    cin >> wiersze;

    cout << endl << "Podaj liczbe kolumn tablicy: ";
    cin >> kolumny;
    cout << endl << endl;


    //Definiujemy tablice zgodnie z wymiarami podanymi przez uzytkownika
    int tablica[wiersze][kolumny];

    //Przypisanie wartosci do elementow tablicy przez uzytkownika
    int i=0;
    int j=0;

    for(; i<wiersze; i++){
        for (; j<kolumny; j++){
            cout << "Podaj liczbe dla elementu tablicy - tablica[" << i << "][" << j << "]: ";
            cin >> tablica[i][j];
            cout << endl;
            continue;
        }
        j=0;
    }

    //Znalezienie najwiekszej wartosci w tablicy
    int naj=-2147483648;
    int najwiersz=0;
    int najkolumna=0;

    i=0;
    j=0;

    for(; i<wiersze; i++){
        for (; j<kolumny; j++){
            if(naj<tablica[i][j]){
                naj=tablica[i][j];
                najwiersz=i;
                najkolumna=j;
            }else{
                continue;
            }
            continue;
        }
        j=0;
    }

    //Wypisanie najwiekszej znalezionej wartosci w tablicy
    cout << "Najwieksza podana wartosc w tablicy to " << naj << ", znajdujaca sie w wierszu " << najwiersz << " i kolumnie " << najkolumna << endl;

    return 0;
}