#include <iostream>
#include <array>
using namespace std;

int main(){

    //Tworzenie i inicjowanie tablicy
    array<int, 8>array={1,2,3,4,5,6,7,8};

    //Znalezienie rozmiaru tablicy
    int size=array.size();

    //Sprawdzenie czy zostala podana tablica, ktora da sie podzielic na dwie rowne czesci
    for(;size%2!=0;){
        cout << "Nie zostala podana tablica, ktora mozna podzielic na dwie czesci" << endl;
        return 1; //Nieprawidlowa tablica
    }

    //Zmienna zawierajaca informacje o rozmiarze jednej czesci
    int czesc=size/2;



    //Wyswietlenie tablicy wejsciowej
    cout << "Tablica wejsciowa:" << endl << endl;

    int j=czesc;

    for(int i=0; i<czesc; i++){

        cout << "    " << array[i] << "       ";

        for(;j<size;){
            cout << array[j] << endl;
            j++;
            break;
        }
    }



    //Zmienna potrzebna do przechowania wartosci
    int wartoscLewa=0;

    //Przywrocenie zmiennej 'j' do poczatkowej wartosci
    j=czesc;

    //Petla zamieniajaca wartosci miejscami
    for(int i=0; i<czesc; i++){

        wartoscLewa=array[i];
        array[i]=array[j];
        array[j]=wartoscLewa;
        j++;

    }

    //Przywrocenie zmiennej 'j' do poczatkowej wartosci
    j=czesc;



    //Wyswietlenie tablicy wyjsciowej
    cout << endl << endl << "Tablica wyjsciowa:" << endl << endl;

    for(int i=0; i<czesc; i++){

        cout << "    " << array[i] << "       ";

        for(;j<size;){
            cout << array[j] << endl;
            j++;
            break;
        }
    }

    return 0;
}