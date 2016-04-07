#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

string imie, nazwisko;

int nr_tel;

int main()
{

cout<<"Nastapi odczyt danych z pliku"<<endl;

    fstream plik;
    plik.open("plik.txt", ios::in);


    plik>>imie;
    plik>>nazwisko;
    plik>>nr_tel;

    plik.close ();


    cout<<imie <<" "<<nazwisko<<" "<< nr_tel;
    getchar();


    return 0;
}
