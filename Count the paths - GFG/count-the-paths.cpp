// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int cntPaths(int source, int destination, vector<int> adj[]){
        if(source == destination) return 1;
        int res = 0;
        for(auto i: adj[source]){
            res += cntPaths(i,destination,adj);
        }
        return res;
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<int> adj[n];
	    for(auto x: edges){
	        adj[x[0]].push_back(x[1]);
	    }
	    return cntPaths(s,d,adj);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends