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
        int val_0 = 3;
        int val_1 = 1;
        int val_2 = 2;
        int val_3 = 1;
        int val_5 = 1;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] == 0 and val_0 > 0)
            {
                val_0--;
                v[i] = 100;
            }
            else if(v[i] == 1 and val_1 > 0)
            {
                val_1--;
                v[i] = 100;
            }
            else if(v[i] == 2 and val_2 > 0)
            {
                val_2--;
                v[i] = 100;
            }
            else if(v[i] == 3 and val_3 > 0)
            {
                val_3--;
                v[i] = 100;
            }
            else if(v[i] == 5 and val_5 > 0)
            {
                val_5--;
                v[i] = 100;
            }
           
        }
        if (val_0 != 0 or val_1 != 0 or val_2 != 0 or val_3 != 0 or val_5 != 0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int value = 100;
            auto rit = find(v.rbegin(), v.rend(), value);
            if (rit != v.rend())
            {
                int index = distance(v.begin(), rit.base()) - 1;
                cout<<index+1<<endl;
            }
        }
    }
    
    return 0;
}