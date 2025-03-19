#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>vec(26,0);
    for(int i=0;i<s.length();i++)
    {
        vec[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]>0) count++;
    }
    if((count%2)==1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}