#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n-2);
        for (int i = 0; i < n-2; i++)
        {
            cin>>v[i];
        }
        if (n-2 < 3)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        bool flag = false;
        for (int i = 0; i < n-4; i++)
        {
            if (v[i] == 1 && v[i+1] == 0 && v[i+2] == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";

        
    }
    
    return 0;
}