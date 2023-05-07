#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,reminder,reversed=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
            cout<<0;
        while(n!=0)
        {
            reminder = n%10;
            cout<<reminder<<" ";
            n/=10;
        }
        cout<<endl;
    }
}
