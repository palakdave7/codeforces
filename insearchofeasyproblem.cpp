#include <iostream>
using namespace std;

int main() {
    int n,count=0;;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t){
            cout<<"HARD"<<endl;
            count=1;
            break;
        }
    }
    if(!count) cout<<"EASY"<<endl;
    return 0;
}