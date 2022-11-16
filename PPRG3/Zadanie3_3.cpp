#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a = 0;
    float b = 0;
    float c = 0;

    cout << "Rownanie kwadratowe ma postac ogolna" << endl << endl;


    //podanie liczb i wypisanie postaci rownania kwadratowego
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << endl;

    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << endl;

    cout << "Podaj liczbe c: ";
    cin >> c;
    cout << endl << endl;

    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl << endl;


    //obliczenie delty
    float delta = 0;
    delta = b*b-4*a*c;


    //obliczenie pierwisatkow, wypisanie wynikow albo wypisanie ze to rownanie kwadratowe nie ma rozwiazan
    if(delta > 0){
        cout << "Delta wieksza od 0" << endl;
        float x1 = 0;
        float x2 = 0;

        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);

        cout << "x1 rowna sie: " << x1 << endl;
        cout << "x2 rowna sie: " << x2 << endl;

    }else if(delta == 0){
        cout << "Delta rowna 0" << endl;
        float x = 0;

        x = -b/(2*a);

        cout << "x rowna sie: " << x << endl;
    
    }else{
        cout << "Delta mniejsza od 0" << endl;
        
        cout << "To rownanie kwadratowe nie ma rozwiazan" << endl;

    }

    return 0;
}