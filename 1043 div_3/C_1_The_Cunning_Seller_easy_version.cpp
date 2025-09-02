#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(ll x) {
    ll val = pow(3,x+1) + x*pow(3,x-1);
    return val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;

        while (n > 0) {
            ll c = log(n) / log(3);
            if (pow(3, c+1) == n) c++;

            ans += cal(c);
            c = pow(3,c);
            n -= c;
        }
        cout << ans << "\n";
    }
    return 0;
}
