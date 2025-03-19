#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int d3=a+b+c;
        int rem=n%d3;
        long long sum=0;
        if(n<=a)
        {
            cout<<1<<endl;
        }
        else if(n<=(a+b))
        {
            cout<<2<<endl;
        }
        else if(n<=(a+b+c))
        {
            cout<<3<<endl;
        }
        else
        {
            sum+=3*(n/d3);
            if(rem>0)
            {
                rem=rem-a;
                sum++;
            }  
             if(rem>0)
            {
                rem=rem-b;
                sum++;
            } 
             if(rem>0)
            {
                rem=rem-c;
                sum++;
            } 
            cout<<sum<<endl;
        }
    }
}