#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        s1+=t1;
        s2+=t2;
        s3+=t3;
    }
    if(s1+s2+s3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}