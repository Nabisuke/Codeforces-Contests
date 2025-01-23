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
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            int result = abs(v[i] - v[i + 1]);
            if (result != 5 && result != 7)
            {
                flag = false;
                break;
            }           
        }
        if (flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";        
    }
    return 0;
}