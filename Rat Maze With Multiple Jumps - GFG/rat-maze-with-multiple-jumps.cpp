// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int m = matrix.size();
	   int n = matrix[0].size();
	   vector<vector<int>> res(m,vector<int>(n,0));
	   if(solve(matrix,res,0,0) == false)
	    return {{-1}};
	   return res;
	}
	bool isValid(int x,int y,vector<vector<int>> matrix){
	    if(x>=matrix.size() || y>=matrix[0].size() || matrix[x][y] == 0)
	        return false;
	        return true;
	}
	bool solve(vector<vector<int>>&matrix,vector<vector<int>>&res,int i, int j){
	    if(i==matrix.size()-1 && j==matrix[0].size()-1){
	        res[i][j] = 1;
	        return true;
	    }
	    if(isValid(i,j,matrix)){
	        res[i][j] = 1;
	        for(int k=1;k<=matrix[i][j];k++){
	            if(solve(matrix,res,i,j+k)) return true;
	            if(solve(matrix,res,i+k,j)) return true;
	        }
	        res[i][j] = 0;
	    }
	    return false;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends