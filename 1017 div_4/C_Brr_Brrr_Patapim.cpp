#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin>>t;    
    while (t--)
    {
        int N; cin>>N;      
        vector<vector<int>> mx(N, vector<int>(N));        
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin>>mx[i][j];
            }
        }
        int val = 2*N;     
        int tracker = 2;       
        vector<int> result;       
        while (tracker <= val)
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i + j + 2 == tracker)
                    {
                        result.push_back(mx[i][j]);
                        tracker++;
                    }
                }
            }
        }       
        int total = (2*N)*(2*N+1)/2;
        int total_sum = accumulate(result.begin(),result.end(),0);       
        int first = total - total_sum;       
        cout<<first<< " ";
        
        for (int num : result)
        {
            cout<<num<<" ";


        }
        cout<<endl;
    }

    return 0;
}
