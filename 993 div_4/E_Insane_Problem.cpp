#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--)
    {
        ll k,l1,r1,l2,r2; cin>>k>>l1>>r1>>l2>>r2;     
        ll curr = 1;
        vector<ll> v;     
        while (curr <= r2)
        {
            v.push_back(curr);
            if (curr > r2 / k) break;
            else curr *= k;
        }
        ll cnt = 0;
        for (ll val : v)
        {
            ll x_min = max(l1, (l2 + val - 1) / val);
            ll x_max = min(r1, r2 / val);
            if (x_min <= x_max)
            {
                cnt += (x_max - x_min + 1);
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}