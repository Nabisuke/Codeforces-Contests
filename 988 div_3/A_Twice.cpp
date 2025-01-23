/*
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
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        vector<bool> track(n,false);
        for (int i =0; i < n-1; i++)
        {
            if (track[i] == true) continue;
            for (int j = i+1; j < n; j++)
            {
                if (track[j] == false && v[i] == v[j])
                {
                    cnt++;
                    track[i] = true;
                    track[j] = true;
                    break;
                }
            }
            
        }
        cout<<cnt<<"\n";

    }
    
    return 0;
}
*/