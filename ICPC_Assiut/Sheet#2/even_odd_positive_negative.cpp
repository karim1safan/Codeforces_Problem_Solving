#include<iostream>

using namespace std;

int main()
{
    int t;
    int even=0,odd=0,pos=0,neg=0;
    cin>>t;
    while(t>=1)
    {
        int num;
        cin >> num;

        if(num%2==0)
            even++;
        else
            odd++;

        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        t--;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
