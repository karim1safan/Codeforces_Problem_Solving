#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter=0;
    cin>>n;
    int i=1;
    while(1)
    {
        if(counter==n)
            break;
        if(i%4==0)
        {
            cout<<"PUM\n";
            i++;
            counter++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
}
