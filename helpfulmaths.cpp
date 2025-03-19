#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    string s;
    cin>>s;
    for(char c:s)
    {
        if(isalnum(c))
        {
            v.push_back(c-'0');
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];
}