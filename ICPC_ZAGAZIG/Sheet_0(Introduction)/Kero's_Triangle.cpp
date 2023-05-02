#include<iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,area,perimeter;
    cin>>a>>b>>c;
    area = (0.5*a)*b;
    perimeter = a+b+c;
    cout << area << endl;
    cout << perimeter << endl;
    return 0;
}
