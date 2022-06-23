// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int md = 1e9+7;
	int TotalWays(int N)
	{
	    // Code here
	    vector<long long int> dp(N+1,0);
	    long long int res;
	    for(int i=0;i<=N;i++){
	        if(i==0) dp[i] = 1;
	        else if(i==1) dp[i] = 2;
	        else dp[i] = (dp[i-2]%md+dp[i-1]%md)%md;
	    }
	    res = dp[N];
	    return (res%md*res%md)%md;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends