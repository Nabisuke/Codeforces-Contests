#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        if (n % 2 == 0)
        {
            cout<<-1<<"\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            ll val = (2 * i) % n;
            if (val == 0) cout<<n;
            else cout<<val;
            if (i < n) cout<<" ";
            else if (i == n) cout<<"\n";
        }
    }
    
    return 0;
}