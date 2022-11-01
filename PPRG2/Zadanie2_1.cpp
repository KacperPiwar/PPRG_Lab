#include <iostream>
#include <fstream>

using namespace std;


int main(){
    int n = 5;
    float czesciSumy = 0;
    int i = 0;
    int suma = 0;

    for (i = 1; i <= n; i++){
        czesciSumy = (i*(i+1))/2;

        suma += czesciSumy;
    }

    cout << suma << endl;

    return 0;

}