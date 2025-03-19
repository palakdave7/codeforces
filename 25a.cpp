#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        k=abs(k);
        int rem=k%p;
        int divi=k/p;
        if(divi>n)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(divi==n&&rem>0)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            if(rem==0)
            {
                cout<<divi<<endl;
            }
            else
            {
                cout<<divi+1<<endl;
            }
        }
    }
}