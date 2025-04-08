#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int maxi=0;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        total+=b;
        total-=a;
        maxi=max(total,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}