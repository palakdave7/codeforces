#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string t,s;
    cin>>t>>s;
    reverse(s.begin(),s.end());
    if(s==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}