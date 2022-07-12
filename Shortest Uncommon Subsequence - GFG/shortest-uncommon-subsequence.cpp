// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int dp[501][501];
  int solve(string &S, string &T, int n, int m){
      if(n == 0){
          return 1005;
      }
      if(m == 0){
          return 1;
      }
      if(dp[n][m] != -1){
          return dp[n][m];
      }
      int j = m;
      for(j=m;j>0;j--){
          if(T[j-1] == S[n-1]){
              break;
          }
      }
      if(j == 0){
          return dp[n][m] = 1;
      }
      int leave = solve(S,T,n-1,m);
      int consider = solve(S,T,n-1,j-1) + 1;
      return dp[n][m] = min(leave,consider);
  }
    int shortestUnSub(string S, string T) {
        // code here
        memset(dp,-1,sizeof(dp));
        int res = solve(S,T,S.size(),T.size());
        return res == 1005 ? -1 : res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        cin>>S>>T;

        Solution ob;
        cout << ob.shortestUnSub(S,T) << endl;
    }
    return 0;
}  // } Driver Code Ends