#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;
        int m; cin>>m;
        string b; cin>>b;
        string c; cin>>c;
        for (int i = 0; i < c.size(); i++){
            if (c[i] == 'D'){
                char ch = b[i];
                a += ch;
            }
            else{
                char ch = b[i];
                a = ch + a;
            }
            }
        cout<<a<<"\n";
        }

    return 0;
}