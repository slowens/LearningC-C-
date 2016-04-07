#include <stdio.h>
#include <iostream>

using namespace std;

long int liczba;

int main() {
    printf("Podaj liczbe:\n");
    scanf("%ld", &liczba);

    int count = 0;
    while (liczba > 0) {
        liczba /= 10;
        count++;
    }

    printf("Podana liczba sklada sie z %d cyfr\n", count);


    return 0;
}
