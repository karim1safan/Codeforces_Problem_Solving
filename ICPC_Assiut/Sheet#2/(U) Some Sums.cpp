#include<bits/stdc++.h>
#include<iomanip>
typedef long long ll;
using namespace std;

int main()
{
    // 20 2 5 => input
    // 2 3 4 5 => range a~b => (n >= a && n<= b)
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
    // 2+3+4+5+11+12+13+14+20 = 84 => output
    int n,a,b;
    ll sum=0;
    cin>>n>>a>>b;

    for(int i=1;i<=n;i++)
    {
        if(i<10)
        {
            if(i>=a && i<=b)
            {
                sum=sum+i;
            }
        }
        else
        {
            int n = i;
            int sumDigit=0;
            while(n!=0)
            {
                int digit = n%10; // 12 => 2
                sumDigit += digit; // 2+1=3
                n/=10;
            }
            if(sumDigit>=a && sumDigit<=b)
            {
                sum+=i;
            }
        }
    }

    cout << sum << endl;
}


