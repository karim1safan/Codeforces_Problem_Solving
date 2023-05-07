#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,reminder,reversed=0;
    cin>>n;
    int num = n;
    while(n!=0)
    {
        reminder=n%10;
        reversed=reversed*10+reminder;
        n=n/10;
    }
    if(reversed == num)
        cout<<reversed<<endl<<"YES\n";
    else
        cout<<reversed<<endl<<"NO\n";



}
