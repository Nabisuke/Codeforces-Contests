#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int t; cin>>t;
    while(t--)
    {
        string p, s;cin>>p>>s;
        int i = 0;
        int j = 0;
        bool flag = true;
        int n = p.size(), m = s.size();
        while(i < n && j < m)
        {
            if(p[i] != s[j])
            {
                flag = false;
                break;
            }
            if(i + 1 < n && p[i+1] == p[i])
            {
                j++;
            }
            else
            {
                if(j + 1 < m && s[j+1] == s[j])
                {
                    j += 2;

                }
                else
                {
                    j++;
                }
            }
            i++;
        }
        if(i != n or j != m) flag = false;
        if (flag) cout <<"YES"<<"\n";
        else cout <<"NO"<<"\n";
    }
    
    return 0;
}
