#include<iostream>

using namespace std;

int main()
{
    int t,num,maxx=0;
    cin >> t;
    while(t >= 1)
    {
        cin >> num; // 1 8 5 7 5 => 8

        if(num>maxx)
        {
            maxx=num;
        }
        t--;
    }

    cout << maxx << endl;

    return 0;
}
