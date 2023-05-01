#include<iostream>
#include<limits>
using namespace std;

int main()
{
     long long a,b,c,d;

     cin >>a>>b>>c>>d;

     int flag = 0;

     if(a*b-c == d)
        flag = 1;
     if((a*b)+c == d)
        flag = 1;
     if(a+(b*c) == d)
        flag = 1;
     if(a-(b*c) == d)
        flag = 1;
     if((a-b)+c == d)
        flag = 1;
     if((a+b)-c == d)
        flag = 1;
     if(flag == 1)
        cout << "YES\n";
     else
        cout << "NO\n";
        
    return 0;
}
