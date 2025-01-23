#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;       
        string result = "1" + string(n - 1, '0');
        cout << result << endl; 
    }   
    return 0;
}
