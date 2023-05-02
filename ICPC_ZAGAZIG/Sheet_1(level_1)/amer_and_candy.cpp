#include<iostream>

using namespace std;

int main()
{
    long long x,y;
    cin>>x>>y;
    if(x%y==0||y%x==0)
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}
