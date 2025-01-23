#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;
    cin>>t;
    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        map<int, vector<int>> mp;      
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin>>x>>y;
            mp[x].push_back(y);
        }
        vector<ll> income;       
        for (auto value : mp)
        {
            auto costs = value.second;
            sort(costs.begin(), costs.end(), greater<int>());           
            ll brand_total = 0;
            for (int y : costs)
            {
                brand_total += y;
            }
            income.push_back(brand_total);
        }

        sort(income.begin(), income.end(), greater<ll>());      
        ll total = 0;
        if (n <= income.size())
        {
            for (int i = 0; i < n; i++)
            {
                total += income[i];
            }
        }
        else
        {
            for (int i = 0; i < income.size(); i++)
            {
                total += income[i];
            }
        }       
        cout<<total<<"\n";
    }   
    return 0;
}
