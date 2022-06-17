// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool DFS(int node,vector<int>a[],vector<bool> &vis,vector<int> &col){
        vis[node] = true;
        for(auto it:a[node]){
            if(!vis[it]){
                col[it] = !col[node];
                if(!DFS(it,a,vis,col)) return false;
            }else{
                if(node != it && col[node] == col[it]) return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<bool> vis(V,0);
	    vector<int> col(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            if(!DFS(i,adj,vis,col)) return false;
	        }
	    }
	    return true;
	}


};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends