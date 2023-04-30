#include<iostream>
using namespace std;

int main()
{
    int a,b,c,res;
    char s,q;

    cin >> a >> s >> b >> q >> c;

    if(s == '+')
    {
        res = a + b;
    }
    else if(s == '-')
    {
        res = a - b;
    }
    else if(s == '*')
    {
        res = a * b;
    }

    if(c == res)
        cout << "Yes" << endl;
    else
        cout << res << endl;

    return 0;
}
