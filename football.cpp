#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int z=0,o=0,maxi=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            z=0;
            o++;
        }
        else
        {
            z++;
            o=0;
        }
        maxi=max(maxi,max(z,o));
    }
    if(maxi>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
    
}