#include <iostream>
using namespace std;

int main() {
    long long p,even,odd;
    cin>>p;
    long long n=p/2;
    if(p%2==0)
    {
        even=n*(n+1);
        odd=n*n;
    }
    else
    {
        n++;
        even=(n)*(n-1);
        odd=n*n;
    }
    cout<<even-odd<<endl;
    return 0;
}