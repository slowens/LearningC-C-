#include <iostream>
#include<stdio.h>

using namespace std;

string imie;

int main()
{
    cout << "Poadaj swoje imie aby okreslic towja plec: " << endl;
    cin>> imie;


    int dlugosc = imie.length();

    if (imie == "Conchita")
    {
        cout<<"Jestes chory idz sie leczyc!!!";
    }
    else if(imie[dlugosc-1] == 'a')
    {
        cout<< "Jestes kobieta";
    }
    else
    {
        cout<<"Jestes mezczyzna";
    }

    getchar();
    return 0;
}
