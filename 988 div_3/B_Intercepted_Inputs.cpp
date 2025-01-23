#include<bits/stdc++.h>
#define ll long long
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
        int val = n-2;
        sort(v.begin(),v.end());
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int l = i; int r = n-1;           
            ll mul = v[i];
            while(l<=r)
            {
                int mid = (l+r)/2;
                ll result = mul * v[mid];
                if (result == val)
                {
                    flag = true;
                    cout<<v[i]<<" "<<v[mid]<<"\n";
                    break;
                }
                else if (result < val) l = mid+1;
                else r = mid-1;
            }
            if (flag) break;
        }

    }
    
    return 0;
}