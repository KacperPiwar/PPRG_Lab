#include <iostream>
#include <vector>
using namespace std;

//Funkcja szukajaca najwiekszej wartosci wektora
int najwiekszaWartosc(vector<int>& wektor, int liczbaElementow){
    int najwiekszaWartosc;

    for(int i=0; i<liczbaElementow; i++){
        if(i==0){
            najwiekszaWartosc=wektor[i];
        }else if(najwiekszaWartosc<wektor[i]){
            najwiekszaWartosc=wektor[i];
        }
    }

    return najwiekszaWartosc;
}

//Funkcja szukajaca numeru indeksu najwiekszej wartosci
int numerIndeksu(vector<int> wektor, int liczbaElementow, int najwiekszaWartosc){
    int numerIndeksu;

    for(int i=0; i<liczbaElementow; i++){
        if(najwiekszaWartosc==wektor[i]){
            numerIndeksu=i;
            return numerIndeksu;
        }
    }
}

int main(){

    //Zmienna przechowujaca liczbe elementow wektora podana przez uzytkownika
    int liczbaElementow=0;

    //Podanie przez uzytkownika liczby elementow
    cout << "Prosze o podanie liczby elementow: ";
    cin >> liczbaElementow;

    //Stworzenie wektora z okreslona przez uzytkownika liczba elementow
    vector<int> wektor;
    wektor.reserve(liczbaElementow);

    //Podanie przez uzytkownika wartosci elementow wektora
    cout << endl << endl << "Prosze o podanie wartosci elementow wektora";

    int x=0;

    for(int i=0; i<liczbaElementow; i++){
        cout << endl << "Element " << i << ": ";
        cin >> x;
        wektor.push_back(x);
    }


    //Szukanie najwiekszej wartosci oraz wyswietlenie jej w terminalu
    int maxWartosc=najwiekszaWartosc(wektor, liczbaElementow);
    cout << endl << "Najwieksza wartosc wektora to: " << maxWartosc << endl;

    //Szukanie numeru indeksu najwiekszej wartosci oraz wyswietlenie go w terminalu
    int nrIndeksu=numerIndeksu(wektor, liczbaElementow, maxWartosc);
    cout << "Numer indeksu najwiekszej wartosci wektora to: " << nrIndeksu << endl;

    return 0;
}