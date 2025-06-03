#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

    int n,x;
    cin>>n>>x;
    for(int i=0;i<(x);i++)
    {
        cout<<i<<" ";
    }
    for(int i=n-1;i>x-1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
}