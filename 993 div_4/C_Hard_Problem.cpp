#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll front = m;
        ll back = m;
        ll total = 0;
        ll front_used = min(a,front);
        front -= front_used;
        total += front_used;
        ll back_used = min(b,back);
        back -= back_used;
        total += back_used;
        ll remaining = front + back;
        ll c_used = min(c, remaining);
        total += c_used;
        cout << total << "\n";

    }  
    return 0;
}