#include<iostream>

using namespace std;

int main()
{
    // 25 16 9
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&a==c)
        cout << "no\n";
    else if(a>b&&a>c)
    {
        // 2 1 1
        if(b==c)
            cout << "no\n";
        else
            if(b>c)
                cout << "no\n";
            else
                cout << "yes\n";
    }
    else
        cout << "no\n";
    return 0;
}
