#include<iostream>

using namespace std;
int main()
{

    char x;

    cin >> x;

    if(x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << "\n";
    }
    else
    {
        if (x >= 'A' && x <= 'Z')
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
