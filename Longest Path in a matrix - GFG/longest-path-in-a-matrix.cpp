// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    int dp[1001][1001];
    int ans(vector<vector<int>>& matrix, int i,int j, int pre){
        if(i<0 || j<0 || i == matrix.size() || j == matrix[0].size() || pre >= matrix[i][j]){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int c = matrix[i][j];
        return dp[i][j] = max({ans(matrix,i+1,j,c),ans(matrix,i-1,j,c),ans(matrix,i,j+1,c),ans(matrix,i,j-1,c)}) + 1;
    }

public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        memset(dp,-1,sizeof(dp));
        int res = INT_MIN;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                int t = ans(matrix,i,j,0);
                res = max(t,res);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends