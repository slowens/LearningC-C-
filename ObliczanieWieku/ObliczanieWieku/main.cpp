#include <stdio.h>


int wiek_za_mc;

int wiek, b;

main()
{

    while(1>0){

        printf("Podaj swoj wiek: ");
        scanf("%d", &wiek);
        printf("Podaj ilosc miesiecy za zeby obliczyc swoj wiek w przyszlosci: ");
        scanf("%d", &wiek_za_mc);
        int lata = wiek_za_mc /12;
        b = wiek + lata;
        printf("Twoj wiek za %d miesiecy wynosi %d lat. \n\n", wiek_za_mc, b);

    }

    return 0;

}
