#include<iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c >= 'a' && c <= 'z')
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cout << "Alphabet Lower Vowel\n";
        else
            cout << "Alphabet Lower Consonant\n";
    }
    else if(c >= 'A' && c <= 'Z')
    {
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            cout << "Alphabet Upper Vowel\n";
        else
            cout << "Alphabet Upper Consonant\n";
    }
    else if(c>='0'&&c<='9')
        cout << "Number\n";
    else
        cout << "Special\n";

    return 0;
}
