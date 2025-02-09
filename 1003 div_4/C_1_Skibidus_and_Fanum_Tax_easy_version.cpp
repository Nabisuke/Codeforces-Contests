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
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll p;
        cin>>p;
        int com = INT_MIN;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            ll dif = p - v[i];
            ll val_1 = min(dif,v[i]);
            ll val_2 = max(dif,v[i]);
            if (val_1 >= com) com = val_1;
            else if (val_2 >= com) com = val_2;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}