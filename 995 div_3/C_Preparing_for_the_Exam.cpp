#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string s = "";
        string result = "";
        for (int i = 1;i <= n; i++)
        {
            s += to_string(i);
        }
        string s_1 = "";
        for (int i = 0; i < k; i++)
        {
            int dig;
            cin>>dig;
            s_1 += to_string(dig);
        }
        for (int i = 0; i < m; i++)
        {
            char removed = s[i];
            s.erase(i,1);
            if (s == s_1) result += to_string(1);
            else result += to_string(0);
            s.insert(s.begin() + i, removed);
        }
        cout<<result<<"\n";

    }
    
    return 0;
}