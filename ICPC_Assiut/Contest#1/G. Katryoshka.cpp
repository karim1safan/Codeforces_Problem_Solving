#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll eyes,mouth,body,mn;
    cin>>eyes>>mouth>>body;
     // eyes    mouth   body
    //  1       2       3
    mn = min(eyes,min(mouth,body)); // 1,2 = 1
    eyes=eyes-mn; // 1 - 1= 0
    body=body-mn; // 3 - 1= 2
    if(eyes/2>=body) // 0 >= 2  False
        cout<<body+mn<<endl; // 2 + 1 = 3
    else
        cout<<(eyes/2)+mn<<endl; // 0 + 1 = 1
}

