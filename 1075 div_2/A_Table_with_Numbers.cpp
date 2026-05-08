#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> v(n);
        int r = 0;
        int c = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            bool row = (v[i] <= h);
            bool col = (v[i] <= l);
            if (row) r++;
            if (col) c++;

            if (row || col){
                cnt++;
            }
        }
        
        int max_possible_pair = cnt/2;
        int total=0;
        for(int i = 0; i < max_possible_pair; i++){
            if (r > 0 && c > 0){
                total++;
                r--;
                c--;
            }
        }
        cout<<total<<"\n";
    }
    return 0;

}