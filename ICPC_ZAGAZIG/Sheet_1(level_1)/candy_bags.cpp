#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        int res = a-b;
        if(res%2==0&&a== res+b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else if(a<b)
    {
        int res = b-a;
        if(res%2==0&&b== res+a)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else if(a==b)
        cout << "Yes\n";
    return 0;
}
