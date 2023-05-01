#include<iostream>
#include<limits>
using namespace std;

int main()
{
     double n,k,a;

     cin >> n >> k >> a;

     double res = (n*k)/a; // 51254.125     15482

     long long l = res; // 51254            15482

     double d = res-l; // 0.125             0

     if(d > 0)
        cout << "double\n";
     else if(l <= INT_MAX)
        cout << "int\n";
     else
        cout << "long long\n";

    return 0;
}
