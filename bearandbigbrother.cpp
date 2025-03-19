#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int a,b;
    cin>>a>>b;
    while(a<=b)
    {
        count++;
        a=a*3;
        b=b*2;
    }
    cout<<count<<endl;
}