#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> s(n);
        map<int,int> mpt;
        for(int i = 0; i < n; i++) cin>>s[i];

        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            mpt[x % k]++;
        }

        for(int i = 0; i < n; i++){
            int x = s[i] % k;
            if(mpt[x] > 0) {
                mpt[x]--;
            }
            else if(mpt[(k - x) % k] > 0){
                mpt[(k - x) % k]--;
            }
        }
        bool flag = true;
        for(auto it : mpt){
            if(it.second > 0){
                flag = false;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<"\n";
    }

    return 0;
}
