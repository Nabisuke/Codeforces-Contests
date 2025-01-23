#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i =0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<int> v_1(n);
        v_1 = v;
        sort(v_1.begin(),v_1.end());
        bool flag = true;
        while(flag)
        {
            flag = false;
            for (int i = 0; i < n-1; i++)
            {
                if ((abs(v[i] - v[i+1]) == 1) && v[i] > v[i + 1])
                {
                    swap(v[i],v[i+1]);
                    i++;
                    flag = true;
                }
            }
        }
        if (v == v_1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";        
    }
    
    return 0;
}