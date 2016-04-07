#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, proba, ilosc_prob=0;

int main()
{
    cout << "Witam, a teraz zagramy w gre o twoje ¿ycie. "<< endl;
    cout << "Wybierz liczbe od 1-100 Msuisz zmiescic sie w 5 probach. Zaczynajmy!!!" << endl<<endl;
    srand(time(NULL));

    liczba = rand()%100+1;
    // cout<<"To jest szukana liczba: "<<liczba<<endl;

    while(proba!=liczba)
    {
    ilosc_prob++;

            cout<<"To twoja "<<ilosc_prob<<" proba\n zgadnij jaka:  "<<endl;
            cin>>proba;
    if(proba==liczba)
        cout<<"Brawo Trafiles"<<endl;

    else if(proba<liczba)
        cout<<"To za malo"<<endl;

    else if(proba>liczba)
        cout<<"To za duzo"<<endl;

    }

    if(ilosc_prob < 6 ){
    cout<<"Brawo Wygrywasz! Trafiles za "<<ilosc_prob<< " razem"<<endl;
    }else{
    cout<<"Niestety przegrales. Trafiles dopiero za: "<<ilosc_prob<< " razem"<<endl;
    }

    return 0;
}
