#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     // your code.

     double pi = 3.141592653;

     double r;

     cin >> r;
     cout << pi * r*r << "\n";
}
