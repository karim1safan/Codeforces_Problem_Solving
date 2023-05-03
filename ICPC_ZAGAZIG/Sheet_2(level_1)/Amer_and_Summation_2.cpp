#include<iostream>

using namespace std;

int main()
{
    long long x,y,sum;
    cin>>x>>y;
    sum = 0;
    for(int i = x; i <= y; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}
