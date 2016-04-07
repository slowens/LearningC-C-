#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
while(1>0)
{
    cout << "Podaj pierwsza liczbe:" << endl;
    cin>>x;
    cout << "Podaj druga liczbe:" << endl;
    cin>>y;

    cout<<endl;
    cout<<"MENU GLOWNE"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Koniec programu"<<endl;



    cout<<"Wybierz rodzaj dzialania (podaj numer menu glownego):"<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        {
            cout<<"Suma = "<< x+y;
        }
        break;
    case '2':
        {
            cout<<"Roznica = "<< x-y;
        }
        break;
    case '3':
        {
            cout<<"Iloraz = "<< x*y;
        }
        break;
    case '4':
        {
            if (y==0) cout<<"Sorry Gregory, nie dzielimy przez 0!!!";
            else cout<<"Iloraz = "<< x/y;
        }
        break;
    case '5':
        {
            exit (0);
        }
    default:
    {
     cout<<"Nie ma takiej opcji. Wybierz cyfre od 1-5";
    }
    }
    getchar();getchar();
    system("cls");

    }

    return 0;
}
