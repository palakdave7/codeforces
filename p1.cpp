#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()<3) cout<<"i"<<endl;
        else{
            s.pop_back();
            s.pop_back();
            s+="i";
            cout<<s<<endl;
        }
    }
}