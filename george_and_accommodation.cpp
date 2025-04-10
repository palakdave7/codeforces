#include <iostream>
using namespace std;

int main() {
    int n,count=0;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t1,t2;
        cin>>t1>>t2;
        if((t2-t1)>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}