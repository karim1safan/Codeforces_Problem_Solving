#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>=1)
    {
        int n;
        cin>>n;
        long long fact = 1;
        for(int i=1;i<=n;i++)
        {
            fact *= i;
        }
        cout << fact << endl;
        t--;
    }
    return 0;
}
