#include<iostream>

using namespace std;

int main()
{

    char c;

    cin >> c;

    if(c >= 'a' && c < 'z')
        cout << char((int)c + 1) << endl;
    else
        cout << char((int)c - 25);
  
    return 0;
}
