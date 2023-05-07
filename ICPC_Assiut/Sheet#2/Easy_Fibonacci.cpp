#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,fab,base,next;
    cin>>n;
    if(n==1)
    {
        cout<<0<<" ";
        return 0;
    }
    if(n==2)
    {
        cout<<0<<" "<<1<<" ";
        return 0;
    }
    cout<<0<<" "<<1<<" ";
    base=0;
    next=1;
    for(int i=3;i<=n;i++)
    {
        fab=base+next;
        cout<<fab<<" ";
        base=next;
        next=fab;
    }

}
