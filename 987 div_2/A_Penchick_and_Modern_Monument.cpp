#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0 ; i < n; i++)
        {
            cin>> v[i];
        }
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        int result = 0;
        for (auto it : mp)
        {
            result = max(result , it.second);
        }
        cout<<v.size()-result<<"\n";
    }
    return 0;
}