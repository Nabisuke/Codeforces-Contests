#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        set<ll> set_A, set_B;
        for (auto x : a)
        {
            set_A.insert(x);
        }
        for (auto x : b)
        {
            set_B.insert(x);
        }        
        int val_1 = set_A.size();
        int val_2 = set_B.size();       
        bool flag = false;
        if (val_1 >= 3 || val_2 >= 3) flag = true;           
        if (val_1 == 2 && val_2 == 2) flag = true;
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
            
        
    }

    
    return 0;
}