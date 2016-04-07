#include <iostream>

using namespace std;


int main()
{
    int liczba;

    cout << "Siemka, podaj liczbe:" << endl;
    cin>> liczba;

    for(int i=liczba;i>1;i--)
    {
        if(i==2)
        {
            cout<<"Podana liczba jest liczba pierwsza";
            break;
        }
        else
        {
            if(liczba%(i-1)==0)
            {
                cout<<"Podana liczba nie jest liczba pierwsza";
                break;
            }
            else
                {
                if(i==2)
                    {
                        cout<<"Podana liczba jest liczba pierwsza";
                    }

                }
        }
    }


    return 0;
}
