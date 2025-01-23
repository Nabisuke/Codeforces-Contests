#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;      
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool flag = false;
        int ind = -1;
        for (int i = 0; i < n; i++)
        {
            bool win = true;
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(v[i] - v[j]) % k == 0)
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                flag = true;
                ind = i + 1;
                break;
            }
        }

        if (flag) cout<<"YES\n"<<ind<<"\n";
        else cout<<"NO\n";
    }

    return 0;
}
