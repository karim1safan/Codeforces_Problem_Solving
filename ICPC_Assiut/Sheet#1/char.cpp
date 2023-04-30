#include<iostream>

using namespace std;
int main()
{

    char x;

    cin >> x;

    if(x >= 'A' && x <= 'Z')
    {
        int res = (int)x + 32;
        cout << char(res) << endl;
    }
    else if (x >= 'a' && x <= 'z')
    {
        int res = (int)x - 32;
        cout << char(res) << endl;
    }

    return 0;
}
