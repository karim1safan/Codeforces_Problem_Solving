#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    if(a<=b&&a<=c)
    {
        if(b<=c)
            cout<<a<<"\n"<<b<<"\n"<<c;
        else
            cout<<a<<"\n"<<c<<"\n"<<b;
    }
    else if(b<=a&&b<=c)
    {
        if(a<=c)
            cout<<b<<"\n"<<a<<"\n"<<c;
        else
            cout<<b<<"\n"<<c<<"\n"<<a;
    }
    else if(c<=a&&c<=b)
    {
        if(a<=b)
            cout<<c<<"\n"<<a<<"\n"<<b;
        else
            cout<<c<<"\n"<<b<<"\n"<<a;
    }

    cout << "\n\n";
    cout<<a<<"\n"<<b<<"\n"<<c;

   return 0;
}