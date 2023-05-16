#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool found = false;
    for(int i = a; i <= b; i++) {
        int n = i;
        bool isLucky = true;
        while(n > 0) {
            int digit = n % 10;
            if(digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            n /= 10;
        }
        if(isLucky) {
            cout << i << " ";
            found = true;
        }
    }

    if(!found) {
        cout << "-1";
    }
}
