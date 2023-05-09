#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int counter=0;
        cin>>n;
        while(n!=0)
        {
            int digit=n%2;
            if(digit==1)
            {
                counter++;
            }
            n=n/2;
        }
        int power=0;
        int decimal=0;
        for(int k=1;k<=counter;k++)
        {
            decimal=decimal+(1*pow(2,power));
            power++;
        }
        cout<<decimal<<endl;
    }
}
