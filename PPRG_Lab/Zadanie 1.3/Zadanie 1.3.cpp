#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Wpisz liczbę:" << endl;

    cin >> number;

    if (number >= 1){
        cout << "Podana liczba: " << number << ", jest liczbą dodatnią." << endl;
    } else if (number == 0){
        cout << "Podana liczba: " << number << ", jest liczbą zero." << endl;
    } else {
        cout << "Podana liczba: " << number << ", jest liczbą ujemną." << endl;
    }

    return 0;
}