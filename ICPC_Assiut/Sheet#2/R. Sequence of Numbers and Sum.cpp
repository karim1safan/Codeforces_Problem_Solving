#include<bits/stdc++.h>
#include<iomanip>
typedef long long ll;
using namespace std;

int main()
{
    while(1)
    {
        int a,b,sum=0,maxx,minn;
        cin>>a>>b;
        if( (b<=0 || a<=0) || (b<=0 && a<=0) )
            break;
        if(a>=b)
        {
            maxx=a;
            minn=b;
        }
        else
        {
            maxx=b;
            minn=a;
        }
        for(int i=minn;i<=maxx;i++)
        {
            sum=sum+i;
            cout <<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
    }
}
