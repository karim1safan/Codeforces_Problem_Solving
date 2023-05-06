#include<iostream>

using namespace std;
int main()
{
    int n;

    cin >> n; // 400
    
    cout << n / 365 << " years" << endl;
    n = n % 365; // 35
    cout << n / 30 << " months" << endl;
    n = n % 30;
    cout << n << " days" << endl;

    return 0;
}
