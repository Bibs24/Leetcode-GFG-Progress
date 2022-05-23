// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<int> adjacent[n];
        for(int i=0;i<m;i++){
            int a = prerequisites[i][1];
            int b = prerequisites[i][0];
            adjacent[a].push_back(b);
        }
        vector<int> indeg(n,0);
        for(int i=0;i<n;i++){
            for(int iter: adjacent[i])
            {
                indeg[iter]++;
            }
        }
        queue<int> Q;
        for(int i=0;i<n;i++){
            if(indeg[i] == 0) Q.push(i);
        }
        vector<int> res;
        while(Q.empty() == false){
            int c = Q.front();
            Q.pop();
            res.push_back(c);
            for(auto it : adjacent[c]){
                indeg[it]--;
                if(indeg[it] == 0) Q.push(it);
            }
        }
        if(res.size() == n) return res;
        else return {};
    }
};

// { Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends