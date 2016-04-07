#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdio.h>

using namespace std;

string imie, nazwisko;

int nr_tel;

int main()
{
    cout << "Podaj imie: " << endl;
    cin>> imie;
    cout << "Podaj nazwisko: " << endl;
    cin >> nazwisko;
    cout << "Podaj nimer telefonu: " << endl;
    cin>> nr_tel;

    cout << "A teraz nastapi magiczny proces zapisu danych... " << endl;
    fstream plik;
    plik.open("plik.txt", ios::out | ios::app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close ();

    Sleep(2000);

    cout << "Sprawdz swoj plik!!" << endl;
    getchar();

    return 0;
}
