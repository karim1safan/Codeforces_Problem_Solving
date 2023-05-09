#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,s,counter=0;
    cin>>k>>s; // 2 1
    for(int i=0;i<=k;i++) // 0 1 2
    {
        for(int j=0;j<=k;j++) 
        {
            if(s-i-j>=0&&s-i-j<=k) // 1-0-0=1
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}
