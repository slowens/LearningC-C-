#include <iostream>
#include <stdio.h>
#include "headears.hpp"


using namespace std;





int main()
{
    double koszty_stale, cena_jednostkowa, jednostkowy_koszt_zmienny;


    cout << "Witaj w programie Asystent Menagera" << endl;


    cout<<"Podaj koszty stale"<<endl;
    cin>>koszty_stale;

    cout<<"Podaj cene jednostkowa"<<endl;
    cin>>cena_jednostkowa;

    cout<<"Podaj jednostkowy koszt zmienny"<<endl;
    cin>>jednostkowy_koszt_zmienny;

    cout<< "Prog rentownosic ilosciowy wynosi : "<< PR_ilosciowy(koszty_stale, cena_jednostkowa, jednostkowy_koszt_zmienny)<<endl;

    getchar();

    return 0;
}
