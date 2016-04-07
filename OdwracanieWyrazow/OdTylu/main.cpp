#include <iostream>
#include<stdio.h>

using namespace std;

string wyraz;

int main()
{
    cout << "Podaj swoj wyraz:" << endl;
    cin>>wyraz;

    int dlugosc=wyraz.length();

    for (int i=dlugosc-1; i >=0; i--)
    {
        cout<< wyraz[i];
    }

    getchar();
    return 0;
}
