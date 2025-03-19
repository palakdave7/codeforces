#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    int sis=s.length();
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i])) u++;
        else l++;
    }
    if(sis/2<u)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);    
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower); 
    }
    cout<<s<<endl;
}