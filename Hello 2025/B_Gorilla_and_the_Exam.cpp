#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        map<ll, ll> mp;
        for (auto el : v)
        {
            mp[el]++;
        }
        ll cnt = mp.size();
        if (cnt == 1)
        {
            cout<<1<<"\n";
            continue;
        }
        vector<ll> frq;
        for (auto it : mp)
        {
            frq.push_back(it.second);
        }
        sort(frq.begin(), frq.end());
        ll uniq = 0;
        ll sum = 0;
        while (uniq < cnt)
        {
            if (sum + frq[uniq] <= k)
            {
                sum += frq[uniq];
                uniq++;
            }
            else break;
        }

        if (uniq == cnt) cout<<1<<"\n";
        else cout<<cnt-uniq<<"\n";
    }
    
    return 0;
}
