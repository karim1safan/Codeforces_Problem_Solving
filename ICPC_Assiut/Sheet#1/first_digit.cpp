#include<iostream>

using namespace std;
int main()
{
    int x;

    cin >> x;

    int is_1st_digit = x / 1000;

    if(is_1st_digit)
    {
        if(is_1st_digit % 2 == 0)
            cout << "EVEN" << endl;
        else
            cout << "ODD" << endl;
    }

    return 0;
}
