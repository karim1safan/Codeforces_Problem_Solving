#include<bits/stdc++.h>
#include<iomanip>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll L,R,sum1,sum2,result,maxx,minn;
        cin >> L >> R;
        maxx = max(L,R); // 3 6 => 6
        minn = min(L,R); // 3 6 => 3
        minn--; // to start from the L input => 2
        sum1 = (minn*(minn+1)) / 2; // 3 
        sum2 = (maxx*(maxx+1)) / 2; // 21
        result = sum2-sum1; // 21 - 3 = 18
        cout << result << endl;
    }
}
