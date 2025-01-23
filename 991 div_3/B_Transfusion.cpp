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
        int n;
        cin>>n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        ll k = sum / n;
        int odd_cnt = (n + 1) / 2;
        int even_cnt = n / 2;
        ll sum_odd = 0, sum_even = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 != 0) sum_odd += a[i];
            else sum_even += a[i];
        }
        if (sum_odd == k * odd_cnt && sum_even == k * even_cnt) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }    
    return 0;
}