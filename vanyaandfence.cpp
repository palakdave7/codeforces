#include <iostream>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    //int a[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t>h) total+=2;
        else total++;
    }
    cout<<total<<endl;
    return 0;
}