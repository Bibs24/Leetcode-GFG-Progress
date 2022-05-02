// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int partyHouse(int N, vector<vector<int>> &adj){
        int max2 = INT_MAX;
        for(int i=1;i <= N; i++){
            vector<int> v(N+1,0);
            queue<int> q;
            q.push(i);
            vector<int> d(N+1,0);
            while(q.size() > 0){
                int a = q.front();
                q.pop();
                v[a] = 1;
                for(auto &j : adj[a]){
                    if(v[j] == 0){
                        d[j] = d[a] + 1;
                        q.push(j);
                    }
                }
            }
            int max1 = INT_MIN;
            for(int j = 1; j <= N;j++){
                max1 = max(max1,d[j]);
            }
            max2 = min(max1,max2);
        }
        return max2;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends