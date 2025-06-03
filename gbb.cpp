#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define m 998244353

int mod_pow(int base, int exponent, int mod)
{
    int result = 1;
    base %= mod;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> q[i];

        vector<int> pp;
        if (q[0] > p[0])
        {
            pp = {q[0], 0, 1};
            v.push_back(pp);
        }
        else if (p[0] > q[0])
        {
            pp = {p[0], 0, 0};
            v.push_back(pp);
        }
        else
        {
            v.push_back({q[0], 0, 1});
            v.push_back({p[0], 0, 0});
        }

        int a1 = (mod_pow(2, p[0], m) + mod_pow(2, q[0], m)) % m;
        cout << a1 << " ";

        for (int i = 1; i < n; i++)
        {
            pp.clear();

            if (q[i] > v[0][0])
            {
                v.clear();
                pp = {q[i], i, 1};
                v.push_back(pp);
            }
            if (p[i] > v[0][0])
            {
                v.clear();
                pp = {p[i], i, 0};
                v.push_back(pp);
            }
            else if (q[i] == v[0][0] || p[i] == v[0][0])
            {
                pp = {p[i], i, !v[0][1]};
                v.push_back(pp);
            }

            if (v.size() == 2)
            {
                int aa, bb;
                if (v[0][2] == 0)
                {
                    aa = q[i - v[0][1]];
                }
                else if (v[0][2] == 1)
                {
                    aa = p[i - v[0][1]];
                }

                if (v[1][2] == 0)
                {
                    bb = q[i - v[0][1]];
                }
                else if (v[1][2] == 1)
                {
                    bb = p[i - v[0][1]];
                }
                int ans = (mod_pow(2, v[0][0], m) + mod_pow(2, max(aa, bb), m)) % m;
                cout << ans << " ";
            }
            else
            {
                int ans;
                if (v[0][2] == 0)
                {
                    ans = (mod_pow(2, v[0][0], m) + mod_pow(2, q[i - v[0][1]], m)) % m;
                }
                else
                {
                    ans = (mod_pow(2, v[0][0], m) + mod_pow(2, p[i - v[0][1]], m)) % m;
                }
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
