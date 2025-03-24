#include <iostream>
#include<vector>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long count=0;
    string s;
    s=to_string(n);
    for(long long i=0;i<s.length();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }
    string s2=to_string(count);
    long long count2=0;
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='4'||s2[i]=='7') count2++;
    }
    if(count2==s2.length()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}