#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int first = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                first = i;
                break;
            }
        }

        if (first == -1)
        {
            cout<<0<<"\n";
            continue;
        }   
        int ans = 1;
        int st = first+1;
        for (int i = st; i < n; i++)
        {
            if (s[i] != s[i - 1])
                ans++;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}