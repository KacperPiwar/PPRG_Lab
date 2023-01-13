#include <iostream>
using namespace std;

//Wyswietlenie obecnego stanu lamiglowki i zapytanie, czy uzytkownik chce wprowadzic jakies zmiany
void stan(int array[9][9]){
    

    for(int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if(j<8){
                cout << array[i][j] << "|";
            }else{
            cout << array[i][j];
            }
        }
        cout << endl;
    }
}

//Wybieranie komorki
void wybor(int& x,int& y){

    cout << "Ktora komorke chcesz wypelnic?" << endl;
    cout << "Rzad (od 0 do 8): ";
    cin >> x;
    //Petla sprawdzajaca czy podana liczba miesci sie w przedziale
    for(;x>8 || x<0;){
        cout << "Zostala podana za duza liczba, prosze podac liczbe od 0 do 8: ";
        cin >> x;
    }

    cout << "Kolumna (od 0 do 8): ";
    cin >> y;
    //Petla sprawdzajaca czy podana liczba miesci sie w przedziale
    for(;y>8 || y<0;){
        cout << "Zostala podana za duza liczba, prosze podac liczbe od 0 do 8: ";
        cin >> y;
    }

}

//Podstawianie liczby do komorki
void podstLiczb(int array[9][9],string& start,int& x,int& y){
        
        cout << endl << "Jaka liczbe chcesz tam wstawic?" << endl;
        cin >> array[x][y];

        //Petla sprawdzajaca czy podana liczba miesci sie w przediale
        for(;array[x][y]>9 || array[x][y]<0;){
            cout << "Zostala podana za duza liczba, prosze podac liczbe od 0 do 9: " << endl;
            cin >> array[x][y];
        }

        //Zapytanie uzytkownika czy chce kontynuowac
        cout << endl << "Czy chcesz kontynuowac podawanie poczatkowych wartosci? (wpisz tak lub nie)" << endl;
        cin >> start;
        cout << endl;

        //Petla sprawdzajaca czy uzytkownik wpisal poprawna fraze
        for (;start!="tak" & start!="nie";){
            cout << "Prosze o wpisanie 'tak' lub 'nie'" << endl;
            cin >> start;
        }
}


//Sprawdzenie czy dozwolone jest wstawienie takiej liczby
bool dozwolone(int array[9][9],int rzad,int kolumna,int liczba){

    //Szukanie takiej samej liczby w rzedzie
    for(int k=0; k<=8; k++){
        if(array[rzad][k]==liczba){
            return false;
        }
    }

    //Szukanie takiej samej liczby w kolumnie
    for(int r=0; r<=8; r++){
        if(array[r][kolumna]==liczba){
            return false;
        }
    }

    //Modulo (%) pozwoli nam sprawdzic w ktorej siatce 3x3 powinnismy szukac
    //Przy nizszych wartosciach(1,2) da nam 0, poniewaz dziala na integerach(zaokragla)

    int kolumnaStart=kolumna-kolumna%3;
    int rzadStart=rzad-rzad%3;
    
    //Szukanie takiej samej liczby w polu 3x3
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(array[i+rzadStart][j+kolumnaStart]==liczba){
                return false;
            }
        }
    }

    return true;
}


//Podstawianie liczb wedlug zasad lamiglowki
bool rozwiazanie(int array[9][9],int rzad,int kolumna){

    //Sprawdzenie czy zakonczylismy ukladac lamiglowke 
    if(rzad==8 && kolumna==9){
        cout << "Stan koncowy lamiglowki:" << endl;
        return true;
    }

    //Przejscie do nastepnego rzedu, jesli przeszlismy przez wszystkie kolumny
    if(kolumna==9){
        rzad++;
        kolumna=0;
    }

    //Sprawdzenie czy w danej komorce znajduje sie juz liczba, jesli tak to przechodzimy do nastepnej kolumny
    if(array[rzad][kolumna]>0){
        return rozwiazanie(array,rzad,kolumna+1);
    }

    //Petla podstawiajaca liczby
    for(int liczba=1; liczba<=9; liczba++){

        //Sprawdzenie czy mozemy podstawic dana liczbe
        if(dozwolone(array,rzad,kolumna,liczba)){

            //Podstawienie
            array[rzad][kolumna]=liczba;

            //Przejscie do nastepnej kolumny
            if(rozwiazanie(array,rzad,kolumna+1)){
                return true;
            }
        }
        //Usuniecie przypisanej liczby, jesli zasady Sudoku nie zostaly spelnione
        array[rzad][kolumna]=0;
    }
    return false;
}

//Glowna funkcja
int main(){

    //array odpowiedzialny za przechowywanie lamiglowki
    int array[9][9]={{0,4,0,0,0,0,0,0,0},
                    {8,0,0,6,3,0,0,0,0},
                    {0,9,0,0,0,0,0,0,1},
                    {6,0,0,1,0,0,0,0,0},
                    {0,0,4,0,5,6,7,2,8},
                    {0,0,0,0,4,2,1,5,6},
                    {5,0,0,8,0,3,0,4,7},
                    {0,0,3,7,0,0,0,0,0},
                    {0,0,7,0,2,5,9,0,3}};

    
    string start="tak";
    //x i y pozwalaja odnosic sie do konkretnych wartosci w array'u
    int x=0;
    int y=0;
    
    //Petla for pozwalajaca zmienic poczatkowy stan lamiglowki
    for(;start=="tak";){
        stan(array);
        cout << "Tak wyglada wybrana przez Ciebie lamiglowka" << endl << "Chcesz cos zmienic? (wpisz tak lub nie)" << endl;
        cin >> start;
        
        //Petla sprawdzajaca czy uzytkownik wpisal poprawna fraze
        for (;start!="tak" & start!="nie";){
            cout << "Prosze o wpisanie 'tak' lub 'nie'" << endl;
            cin >> start;
        }

        if(start=="nie"){
            break;
        }
        
        wybor(x, y);

        podstLiczb(array,start,x,y);
    }

    if(rozwiazanie(array,0,0)){
        stan(array);
        cout << endl;
    }else{
        cout << "To sudoku nie ma rozwiazania" << endl;
    }

    return 0;
}