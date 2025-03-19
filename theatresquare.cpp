#include<iostream>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long  div1=n/a,div2=m/a;
   // int rem1=n%a,rem2=m%a;
    long long ans=0;
    if(div1==0&&div2==0)
    {
        cout<<1<<endl;
    }
    else
    {
        long long rem1=n%a,rem2=m%a;
      
        if(rem1>0) div1++;
        if(rem2>0) div2++;
        ans+=(div1*div2);
        cout<<ans<<endl;
    }
}