#include<iostream>
using namespace std;
int main()
{
    int t=0,u=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                t=i,u=j;
            }
        }
    }
    cout<<abs(3-t)+abs(3-u);
}