#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(), v.rend());
        ll cnt = 0;
        ll ans = 0;        
        for (int i = 0; i < n; i++)
        {
            cnt++;
            if (cnt * v[i] >= x)
            {
                ans++;
                cnt = 0;
            }
        }

        cout<<ans<<"\n";

    }
    
    return 0;
}