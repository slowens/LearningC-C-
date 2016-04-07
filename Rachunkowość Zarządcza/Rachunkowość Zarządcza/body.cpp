#include <iostream>
#include "headears.hpp"

using namespace std;


//Funkcje:

double PR_ilosciowy(double koszty_stale, double jednostkowa_cena, double jednostkowy_koszt_zmienny)
{

    double ilosciowy_prog_rentownosci;

    ilosciowy_prog_rentownosci = koszty_stale/(jednostkowa_cena - jednostkowy_koszt_zmienny);

    return ilosciowy_prog_rentownosci;

};
