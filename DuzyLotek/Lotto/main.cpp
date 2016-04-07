#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w losowaniu duzego lotka! Za 3 sekundy nastapi zwolnienie blokady!" << endl;
    Sleep(3000);
    cout<<endl;

    srand(time(NULL));

    for(int i=1; i<=6; i++)
    {
        liczba = rand()%49+1; // wyznaczanie liczby sposrod 49
        Sleep(1000);
        cout<<liczba<<"\a"<<endl; // wypisanie liczby
    }

    getchar();

    return 0;
}
