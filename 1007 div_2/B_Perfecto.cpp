//time exceeds on 4th testcase
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool helper(ll x)
{
    ll val = sqrt(x);
    return val * val == x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll total = (n * (n + 1)) / 2;
        ll num = sqrt(total);
        if (num * num == total)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(n < 2)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<int> v(n, 0);
        vector<bool> tracker(n + 1, false);
        v[0] = 2;
        tracker[2] = true;
        ll prefix = 2;
        for (int i = 1; i < n; i++)
        {
            int filler = -1;
            for (int x = 1; x <= n; x++)
            {
                if (!tracker[x] && !helper(prefix + x))
                {
                    filler = x;
                    break;
                }
            }
            if (filler == -1)
            {
                break;
            }
            v[i] = filler;
            tracker[filler] = true;
            prefix += filler;
        }
        if(v[n - 1] == 0)
        {
            cout<< -1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout<<v[i];
                if (i == n - 1) cout<<"\n";
                else cout<<" ";
            }
        }
    }
    return 0;
}
