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
        ll n;
        cin>> n;
        ll parts = n / 15;
        ll ans = parts * 3;
        ll remain = n % 15;
        if (remain >= 2) ans += 3;
        else if (remain == 1) ans += 2;
        else if (remain == 0) ans += 1;
        cout<<ans<<"\n";
        
        
    }
    
    return 0;
}