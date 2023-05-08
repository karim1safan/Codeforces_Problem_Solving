#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1;
    int sp = n-1;
    for(int i=1;i<=n;i++)
    {
        for(int s=sp;s>0;s--)
        {
            cout<<" ";
        }
        sp--;
        for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
        k=k+2;
        cout<<endl;
    }
    k=k-2;
    sp=1;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<sp;s++)
        {
            cout<<" ";
        }
        sp++;
        for(int j=k;j>0;j--)
        {
            cout<<"*";
        }
        k=k-2;
        cout<<endl;
    }
}
