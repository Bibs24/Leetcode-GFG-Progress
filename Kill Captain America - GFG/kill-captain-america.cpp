// { Driver Code Starts
#include <bits/stdc++.h>
 
using namespace std;
 

 // } Driver Code Ends
class Solution{
public:
    int captainAmerica(int N, int M, vector<vector<int>> &V){
        
        int n = N;
       int d[N] = {};
       vector<int> adj[N];
       for(int i=0;i<M;i++){
           int u = V[i][0]-1, v = V[i][1]-1;
           adj[u].push_back(v);
       }
       queue<int> q1;
       for (auto a : adj) {
           for (auto i : a) {
               d[i]++;
           }
       }
       int ter = -1;
       bool ex = true;
       for (int i = 0; i < N; i++) {
           if (adj[i].empty()) {
               if(ter == -1) ter = i;
               else if(ter != i) ex = false;
           }
           if (!d[i]) q1.push(i);
       }
       if (ex && ter != -1) return 1;
       while(!q1.empty()) {
           n--;
           int v = q1.front();
           q1.pop();
           for (auto i : adj[v]) {
               d[i]--;
               if (!d[i]) q1.push(i);
           }
       }
       return n;

    } 
};

// { Driver Code Starts.
 

int main() {
    int t;cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m+1);
        for(int i=0;i<m;i++){
            int a, b;cin >> a >> b;
            v[i].push_back(a);
            v[i].push_back(b);
        }
        
        Solution obj;
        cout << obj.captainAmerica(n, m, v) << endl;
    }
 
}  // } Driver Code Ends