// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {

public:
    vector<vector<long long>> mul(vector<vector<long long>> mat1,vector<vector<long long>> mat2){
        vector<vector<long long>> res(2,vector<long long>(2,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    res[i][j] += mat1[i][k]*mat2[k][j]%1000000007;
                }
            }
        }
        return res;
    }
    vector<vector<long long>> solve(vector<vector<long long>> &a, int n){
        if(n == 1) return a;
        vector<vector<long long>> temp = solve(a,n/2);
        if(n%2 == 0) return mul(temp,temp);
        return mul(temp,mul(temp,a));
    }
    int FindNthTerm(long long int n) {
        // Code here
        vector<vector<long long>> a = {{1,1},{1,0}};
        vector<vector<long long>> res = solve(a,n+1);
        return res[0][1]%1000000007;
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int n;
		cin >> n;
		Solution obj;
		int ans = obj.FindNthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends