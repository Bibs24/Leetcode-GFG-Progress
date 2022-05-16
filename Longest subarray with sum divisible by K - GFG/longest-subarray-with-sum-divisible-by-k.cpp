// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> m;
	    long long sum = 0;
	    int res = 0;
	    m[0] = -1;
	    for(int i=0;i<n;i++){
	        sum = (sum%k + arr[i]%k+k)%k;
	        if(m.find(sum) != m.end()){
	            res = max(res, i-m[sum]);
	        }else{
	            m[sum] = i;
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends