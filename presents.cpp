#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        v[t]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}