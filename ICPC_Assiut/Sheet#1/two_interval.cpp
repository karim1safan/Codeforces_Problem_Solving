#include<iostream>
using namespace std;

int main()
{
    int L1,r1,L2,r2;

    cin >> L1 >> r1 >> L2 >> r2;

    if(max(L1,L2) > min(r1,r2))
        cout << -1 <<  endl;
    else
        cout << max(L1,L2) << " " << min(r1,r2) << endl;

    return 0;
}
