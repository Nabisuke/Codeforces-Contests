//upsolve
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> v_1(n+1);
        for (int i = 0; i < n; i++)
        {
            v_1[v[i]]++;
        }
        vector<int> len(n+1);
        len[0] = (v_1[v[0]] == 1) ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            if (v_1[v[i]] == 1)
            {
                len[i] = len[i-1] + 1;
            }
        }
        int mx = *max_element(len.begin(),len.end());
        if (mx == 0) 
        {
            cout<<0<<"\n";
            continue;
        }
        for (int i  =0; i < n; i++)
        {
            if (len[i] == mx)
            {
                cout<<i-len[i]+2<<" "<<i+1<<"\n";
                break;
            }
        }
    }
    
    return 0;
}