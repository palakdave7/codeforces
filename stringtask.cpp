#include<iostream>
using namespace std;
bool is_consonant(char c)
{
    return !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(is_consonant(tolower(s[i])))
        {
            cout<<"."<<char(tolower(s[i]));
        }
    }
}