#include<iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(char &c:s1)
    {
        c=tolower(c);
    }
    for( char &c:s2)
    {
        c=tolower(c);
    }
    int count=0;
    // cout<<s1<<endl<<s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]<s2[i])
        {
            cout<<-1;
            count=1;
            break;
        }
        else if(s1[i]>s2[i])
        {
            cout<<1;
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<0;
    }
}