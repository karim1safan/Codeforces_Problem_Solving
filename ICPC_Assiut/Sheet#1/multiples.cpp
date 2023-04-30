#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    long a, b;

    cin >> a >> b;

    if (a >= b && a % b == 0)
        cout << "Multiples\n";
    else if (b >= a && b % a == 0)
        cout << "Multiples\n";
    else
        cout << "No Multiples\n";

    return 0;
}
