// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int arrangeTiles(int N){
        // code here
        long long dp[5] = {1,1,1,1,0};
        for(int i=4;i<=N;i++){
            dp[i%5] = dp[(i-1)%5] + dp[(i-4)%5];
        }
        return dp[N%5];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.arrangeTiles(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends