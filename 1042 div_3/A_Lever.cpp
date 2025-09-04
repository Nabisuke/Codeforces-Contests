#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int ans=0;
        bool flag = true;
        int cnt = 0;
        bool flag2 = false;
        while (flag == true){
            for (int i = 0; i < n; i++){
                if (a[i] > b[i]){
                    if (flag2 == true) continue;
                    else{
                        a[i]--;
                        cnt++;
                        flag2 = true;
                    }                                 
                }
                else if (a[i] < b[i]){
                    a[i]++;
                }
            }
            flag2 = false;
            if (cnt > 0){
                cnt = 0;
                flag = true;
            }
            else if (cnt == 0) flag = false;
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}