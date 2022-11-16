#include <iostream>
using namespace std;

int main(){
    int wiersze = 0;

    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> wiersze;
    cout << endl << endl;

    int kolumny = wiersze;

    float pascal[wiersze][kolumny];
    
    int j = 0;
    int i = 0;
    
    cout << "Trojkat Pascala:" << endl;

    //wypisywanie i wyliczanie kolejnych liczb Trojkata Pascala
    for (i=0; i<wiersze; i++){
        pascal[i][0]=1;
        pascal[i][i]=1;

        for (; j<=i; j++){
            if(j==0){
                cout << pascal[i][0] << " " << flush;
                continue;
            }else if(j<=i-1){
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                cout << pascal[i][j] << " " << flush;
                continue;
            }else if(j==i && i!=0){
                cout << pascal[i][i] << " " << flush;
                break;
            }else{
                break;
            }
        }

        j = 0;
        cout << endl;
    }

    return 0;
}