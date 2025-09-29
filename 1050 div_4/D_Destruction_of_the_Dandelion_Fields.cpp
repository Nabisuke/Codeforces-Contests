#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        deque<ll> d_even;
        deque<ll> d_odd;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            if (x%2 == 0){
                d_even.push_back(x);
            }
            else{
                d_odd.push_back(x);
            }
        }
        ll total = 0;
        if (d_odd.empty()){
            cout<<0<<"\n";
            continue;
            
        }
        
        sort(d_odd.begin(),d_odd.end());
        total += d_odd.back();
        d_odd.pop_back();

        for (auto it : d_even){
            total += it;
        }

        int it = 0;
        while(!d_odd.empty()){
            it++;
            if (it%2 == 0){
                total += d_odd.back();
                d_odd.pop_back();               
            }
            else{
                d_odd.pop_front();
                
            }          
        }
        cout<<total<<"\n";

    }
    return 0;
}