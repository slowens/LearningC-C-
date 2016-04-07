#include <iostream>
#include <iomanip>

using namespace std;

long double fib[100000];
int n;

int main()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyc?:" << endl;
    cin>>n;

    fib[0] = 1;
    fib[1] = 1;

    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout<<setprecision (500000);


    for (int i=0; i<n; i++)
    {
        cout<< "Kolejny "<<i+1<<" wyraz ciagu to "<<fib[i]<<endl;
    }

    /* Powyzsza funkcja wyznacza kolejne wyrazy ciagu fibonacciego*/


    cout<< "Najwyzszy "<<n<<" wyraz ciagu to:"<<fib[n-1];

    /* Powyzsza funkcja wyznacza najwyzszy wyraz ciagu fibbonaciego jest to n=23601, tylko n-ty ten który wpiszemy */

    //cout<< "Zlota liczba to: "<<fib[n-1] / fib[n-2]; // wyznaczenie zlotej liczby


    return 0;
}
