#include <iostream>
#include<stdio.h>
#include <math.h>

using namespace std;

int liczba=50;
char znak, znak1;
int pom = 0;

int main()
{
    printf("Pomysl liczbe od 1-100:\n");

    while(pom<5){

        printf("czy twoja liczba to %d\n tak(t) lub nie(n)\n" , liczba);
        znak1 = getchar();
        fflush(stdin);
        if(znak1 == 't')
        {
            printf("%d to twoja liczba", liczba);
            pom = 6;
        }
        else
        {
        printf("Czy Twoja liczba jest wieksza od %d\n tak(t) czy nie (n)\n", liczba);

        znak = getchar();
        fflush(stdin);

        if (znak == 't')
        {
            double pomliczba = liczba;
            liczba = pomliczba/2 * 3 + 1;
        }
        else
            {
            liczba = liczba/2;
            }
        }
    }

    return 0;

    }

