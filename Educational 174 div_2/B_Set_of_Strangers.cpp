//incorrect code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<int, int> mp;
        vector<vector<int>> mat(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                mp[mat[i][j]]++;
            }
        }
        if (mp.size() <= 3)
        {
            cout<<mp.size()-1<<"\n";
            continue;
        }
        else
        {
            map<int,int> mp_1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int col = mat[i][j];
                    if (mp_1.find(col) == mp_1.end())
                    {
                        mp_1[col] = 1;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int col = mat[i][j];
                    if (j + 1 < m && mat[i][j + 1] == col)
                    {
                        mp_1[col] = 2;
                    }                       
                    if (i + 1 < n && mat[i + 1][j] == col)
                    {
                        mp_1[col] = 2;
                    }
                        
                }
            }
            int total = 0, mx = 0;
            for (auto p : mp_1)
            {
                total += p.second;
                mx = max(mx, p.second);
            }
            cout<<total - mx<<"\n";
            
            
        }

    }
    
    return 0;
}