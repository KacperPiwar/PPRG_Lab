#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    int number3;

    cout << "Podaj pierwsza liczbe:";
    cin >> number1;

    cout << "Podaj druga liczbe:";
    cin >> number2;

    cout << "Podaj trzecia liczbe:";
    cin >> number3;

    if(number1>number2 && number1>number3){
        cout << "Liczba " << number1 << " jest największą z podanych." << endl;
    }else if (number2>number1 && number2>number3){
        cout << "Liczba " << number2 << " jest największą z podanych." << endl;
    }else if (number3>number1 && number3>number2){
        cout << "Liczba " << number3 << " jest największą z podanych." << endl;
    }

    return 0;
}