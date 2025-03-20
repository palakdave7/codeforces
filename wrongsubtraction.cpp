#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    while(k--)
    {
        string s=to_string(n);
        if(s[s.length()-1]!='0')
        {
            n--;
        }
        else
        {
            n=n/10;
        }
    }
    cout<<n<<endl;
}