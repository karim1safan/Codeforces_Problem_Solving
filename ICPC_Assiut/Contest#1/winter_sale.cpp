
#include<iostream>

using namespace std;

int main()
{

    double x, p; // 20 80

    cin >> x >> p;

    double results = p/(1-(x/100));

    cout << round(results * 100.0) / 100.0 << endl; 

    return 0;
}
