#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;   
    while (t--)
    {
        string s;
        cin >> s;
        bool found = false;
        int n = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i+1])
            {
                found = true;
                break;
            }
        }
        int min;
        if (found == true) min = 1;
        else min = n;
        cout<<min<<"\n";
    }
    
    return 0;
}
