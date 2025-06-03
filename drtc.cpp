#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0') z++;
            else o++;
        }
        cout<<o*(o-1)+z+z*(o)<<endl;
    }
    return 0;
}