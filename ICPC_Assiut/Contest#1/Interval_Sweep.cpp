#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0||abs(a-b)>1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}