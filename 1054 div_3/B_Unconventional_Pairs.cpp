#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int mx = INT_MIN;
        for (int i = 1; i <= n; i+= 2){
            int dif = v[i] - v[i-1];
            mx = max(dif, mx);
        }
        cout<<mx<<"\n";
    }
    return 0;
}