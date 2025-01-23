#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> ar(n);
        int left = 0,cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(ar[i] >= k)
            {
                left += ar[i];
            }
            else if(ar[i] == 0 && left > 0)
            {
                    cnt++;
                    left--;
            }
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}