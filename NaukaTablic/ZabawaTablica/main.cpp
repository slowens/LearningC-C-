#include <iostream>

using namespace std;

float liczby[5];
float suma, srednia;

int main()
{
    for (int i=0; i<5; i++)
    {
        cout<<endl<<"Podaj "<<i+1<<" liczbe: ";
        cin>>liczby[i];
        suma += liczby[i];
    }

    srednia = suma / 5;

    cout<<endl<<"Suma rowna sie "<<suma;
    cout<<endl<<"Srednia rowna sie "<<srednia;

    return 0;
}
