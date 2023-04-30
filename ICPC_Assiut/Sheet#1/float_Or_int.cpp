#include<iostream>
using namespace std;

int main()
{
    float x;

    cin >> x; // 534.958

    int y = (int)x; // 534

    if(x - y > 0 ) // 534.958 - 534 = 0.958
        cout << "float " << y << " " << x - y << endl;
    else
        cout << "int " << x << endl;

    return 0;
}
