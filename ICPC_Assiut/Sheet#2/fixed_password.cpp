#include<iostream>

using namespace std;

int main()
{
    int n;

    const int pass = 1999;

    while(true)
    {
        cin >> n;
        if(n == pass)
        {
            cout << "Correct" << endl;
            break;
        }

        else
        {
            cout << "Wrong" << endl;
            continue;
        }
    }

    return 0;
}
