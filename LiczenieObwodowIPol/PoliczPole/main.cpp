#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;


void wybierzFigure(){

    cout << "Wybierz jaka figure:" << endl;
    cout << "1. Trojkat" << endl;
    cout << "2. Kwadrat" << endl;
    cout << "3. Prostokat" << endl;
    cout << "4. Kolo" << endl;

}

double LiczPoleTrojkata(double h, double a)
{
    return h * a / 2;
}

double LiczPoleKwadratu(double a)
{
    return a * a;
}

double LiczPoleProstokata(double a, double b)
{
    return a * b;
}

double LiczPoleKola(double r)
{
    return r * r * 3.14 ;
}

double LiczObwodTrojkata(double a, double b, double c)
{
    return a+b+c;
}

double LiczObwodKwadratu(double a)
{
    return 4*a;
}

double LiczObwodProstokata(double a, double b)
{
    return 2*a + 2*b;
}

double LiczObwodKola(double r)
{
    return 2* 3.14  * r;
}

void DrukujWynik(double pole, double obwod)
{
    cout<<"Pole twojej figury wynosi: " << pole<<endl;
    cout<<"Obwod twojej figury wynosi: " << obwod<<endl;
    getchar();
}






int main()
{

    wybierzFigure();
    char p ;
    int s =0;

    while(s<1){

        char w;
        cin>>w;

        switch(w){

            case'1':{
            p = '2';
            s = 10;
            break;
            }

            case'2':{
            p = '3';
            s = 10;
            break;
            }

            case'3':{
            p = '4';
            s = 10;
            break;
            }

            case'4':{
            p = '5';
            s = 10;
            break;
            }

            default:
                system("cls");
                cout<<"Bledna wartosc wybierz figure raz jeszcze!"<<endl;
                wybierzFigure();

    }

    }

            double a = 0;
            double b = 0;
            double c = 0;
            double h = 0;
            double r = 0;

    switch(p){

        case '2':{
            cout<<"Podaj dlugosc pierwszego boku trojkata: "<<endl;
            cin>>a;
            cout<<"Podaj dlugosc drugiego boku trojkata: "<<endl;
            cin>>b;
            cout<<"Podaj dlugosc trzeciego boku trojkata: "<<endl;
            cin>>c;
            cout<<"Podaj wysokosc trojkata: "<<endl;
            cin>>h;
            DrukujWynik( LiczPoleTrojkata(h , a), LiczObwodTrojkata(a, b, c));
        break;}

        case '3':{
            cout<<"Podaj dlugosc dowolnego boku kwadratu: "<<endl;
            cin>>a;
            DrukujWynik(LiczPoleKwadratu(a), LiczObwodKwadratu(a));
        break;}
        case '4':{
            cout<<"Podaj dlugosc dluzszego boku prostokata: "<<endl;
            cin>>a;
            cout<<"Podaj dlugosc krotszego boku prostokata: "<<endl;
            cin>>b;
            DrukujWynik(LiczPoleProstokata(a, b), LiczObwodProstokata(a, b));
        break;}
        case '5':{
            cout<<"Podaj dlugosc promien kola: "<<endl;
            cin>>r;
            DrukujWynik(LiczPoleKola(r), LiczObwodKola(r));
        break;}


    }




    return 0;
}
