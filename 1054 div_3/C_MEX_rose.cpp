#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int> v(n+1,0);
        for (int i = 0; i < n; i++){
            int x; cin>>x;
            v[x]++;           
        }

        int mex = 0;
        for (int i = 0; i < k; i++){
            if (v[i] == 0){
                mex++;
            }
        }
        int ans = mex + v[k] - min(mex, v[k]);
        cout<<ans<<"\n";  

    }
    
    return 0;
}