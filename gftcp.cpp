#include <iostream>
#include <climits>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mini1 = min(a, c);
        int mini2 = min(b, d);
        if (mini1 < mini2)
        {
            cout << "Flower" << endl;
        }
        else
        {
            cout << "Gellyfish" << endl;
        }
    }
}