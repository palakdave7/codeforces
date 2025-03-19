#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    while(n--)
    {
        int x,y,z;
        cin>>x;
        int count=0;
        if(x==0)
        {
            count++;
        }
        cin>>y;
        if(y==0)
        {
            count++;
        }
        cin>>z;
        if(z==0)
        {
            count++;
        }
        if(count<2)
        {
            flag++;
        }

    }
    cout<<flag<<endl;
}