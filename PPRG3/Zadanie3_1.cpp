#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    float a;
    float b;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << endl << "Podaj liczbe b: ";
    cin >> b;

    float suma;
    float roznica;
    float iloczyn;
    float iloraz;

    //Obliczenia matematyczne
    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    iloraz = a / b;

    //wypisanie na ekranie z dokladnoscia do dwoch miejsc po kropce
    cout << "suma wynosi: " << fixed << setprecision(2) << suma << endl;
    cout << "roznica wynosi: " << fixed << setprecision(2) << roznica << endl;
    cout << "iloczyn wynosi: " << fixed << setprecision(2) << iloczyn << endl;
    cout << "iloraz wynosi: " << fixed << setprecision(2) << iloraz << endl;

    return 0;
}