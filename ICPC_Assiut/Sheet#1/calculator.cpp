#include<iostream>

using namespace std;
int main()
{

    int a,b;
    char s;

    cin >> a >> s >> b;

    if(s == '+')
    {
        int res = a + b;
        cout << res << "\n";
    }
    else if(s == '-')
    {
        int res = a - b;
        cout << res << "\n";
    }
    else if(s == '*')
    {
        int res = a * b;
        cout << res << "\n";
    }
    else if(s == '/')
    {
        int res = a / b;
        cout << res << "\n";
    }
    return 0;
}
