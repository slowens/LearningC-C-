#include <iostream>
#include <stdio.h>

using namespace std;

int tablica[10];

int main() {
    for (int i = 0; i < 10; i++) {                              //wypelnianie tablicy elementami
        printf("Podaj wartosc dla elementu tablicy[%d]\n", i);
        scanf("%d", &tablica[i]);
    }

    int temp = tablica[0];
    int tempIndeks = 0;

    for (int i = 1; i < 10; i++){                               // szukanie w tablicy najwiekszego elementu
        if (temp <= tablica[i]) {
            temp = tablica[i];
            tempIndeks = i;
        };

    }

    printf("Najwieksza wartosc w tablicy to: %d\n o indeksie: %d\n", temp, tempIndeks);



    return 0;
}
