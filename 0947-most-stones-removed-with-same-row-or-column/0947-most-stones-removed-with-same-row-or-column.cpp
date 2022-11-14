class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<int> &rmvd) {
        rmvd[node] = 1;
        for(int ad : adj[node]) {
            if(!rmvd[ad]) dfs(ad, adj, rmvd);
        }
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> adj[n];

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i != j && (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])) adj[i].push_back(j);
            }
        }
        
        vector<int> rmvd(n, 0);
        int ans = n;
        for(int i=0; i<n; i++) {
            if(!rmvd[i]) dfs(i, adj, rmvd), ans--;
        }

        return ans;
    }
};