#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;
    while (t--){
        int n; 
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            if (v[i] != n-i) {
                int pos = find(v.begin(), v.end(), n - i) - v.begin();
                reverse(v.begin() + i, v.begin() + pos + 1);
                break;
            }
        }

        for (int x : v) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}
