#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int mn = INT_MAX;
        string s = to_string(n);
        for (int i = 0; i < s.size(); i++){
            int x = s[i] - '0';
            mn = min(x,mn);
        }
        cout<<mn<<"\n";
    }
    
    return 0;
}