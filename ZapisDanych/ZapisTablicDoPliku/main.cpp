#include <iostream>
#include <stdio.h>

using namespace std;

int tab[20];
FILE *plik;

int main()
{

    for(int i=0;i<20;i++)
    {
        tab[i]=i+1*2;
    }


    plik = fopen("plik2.txt","wb");

    fwrite(tab, sizeof(int),20,plik);

     if (plik==NULL)
        {
        printf("Pliku nie udalo sie utworzyc");
        }

    fclose(plik);


    plik=fopen("plik1.txt","wt");

    for(int j=0;j<20;j++)
    {
        tab[j] = j*2;

        fprintf(plik,"x=%d\n",tab[j]);

        if (plik==NULL)
        {
        printf("Pliku nie udalo sie utworzyc");
        }

    }

    fclose(plik);




    return 0;
}
