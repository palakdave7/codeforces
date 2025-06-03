#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int a = 0, b = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (v[0] % 2 != v[i] % 2)
                a++;
            else
                break;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[n - 1] % 2 != v[i] % 2)
                b++;
            else
                break;
        }
        cout << min(a, b) << endl;
    }
    return 0;
}