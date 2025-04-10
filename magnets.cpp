#include <iostream>
using namespace std;

int main() {
    int count=1;
    int n,curr;
    cin>>n;
    int t;
    cin>>t;
    curr=t;
    n--;
    while(n--)
    {
        int t2;
        cin>>t2;
        if(curr!=t2)
        {
            count++;
        }   
        curr=t2;
    }
    cout<<count<<endl;
    return 0;
}