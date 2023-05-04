#include<iostream>

using namespace std;

int main()
{
    /*
        notes: 0 and 1 not of them[prime,not prime]
        prime is divisble by 1 and itself

        15 = 1*5
           = 3*5 => not prime

        7  = 1*7 => prime
    */
    int n;
    cin>>n; // 7
    bool is_prime = 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            is_prime = 1;
    }
    if(is_prime == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
