#include <iostream>
using namespace std;

int main(){

    int tablica[10][10];
    int i=0;

    for (i=0; i<10; i++){
        tablica[0][i] = i;
    }

    for (i=0; i<10; i++){
        tablica[1][i] = i+i;
    }

    return 0;
}