#include<bits/stdc++.h>
#include<iomanip>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,sum=0,maxx,minn;
        cin>>x>>y;
        if(x>=y)
        {
            maxx=x;
            minn=y;
        }
        else
        {
            maxx=y;
            minn=x;
        }
        for(int i=minn+1;i<maxx;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout << sum << endl;
    }
}
