#include<iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int digit_1 = n%10;
    int digit_2 = (n%100)/10.0;

    if(digit_1%digit_2 == 0 || digit_2%digit_1 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
