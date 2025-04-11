#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        sum+=t;
    }
    double temp=sum/n;
    cout<<fixed<<setprecision(12)<<temp<<endl;
    return 0;
}