#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            char c=toupper(s[0]);
            cout<<c;
        }
        else{
            cout<<s[i];
        }
    }

}