#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> v(n);
        vector<int> freq(n + 1, 0);
        vector<int> b(n);
        int val = 1;
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
            if (freq[v[i]] > freq[val])
            {
                val = v[i];
            }
            b[i] = val;
        }
        
        for (int x : b) cout << x << " ";
        cout<<"\n";
    }

    return 0;
}