#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int cnt_neg = 0, cnt_0 = 0;
        for (int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i] < 0) cnt_neg++;
            if(v[i] == 0) cnt_0++;
        }
        if (cnt_neg % 2== 0){
            cout<<cnt_0<<"\n";
        }
        else{
            cout<<cnt_0 + 2<<"\n";
        }
    }
    return 0;
}