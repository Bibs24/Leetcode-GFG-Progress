// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        if(s == 0){
            for(int i=0;i<n;i++){
                if(arr[i] == 0){
                    return vector<int> {i,i};
                }
            }
            return vector<int> {-1};
        }
        int low = 0, right = 0, curr_sum = 0;
        while(low < n && right <= n && low<=right){
            if(curr_sum == s){
                return vector<int>{low+1,right};
            }
            if(curr_sum < s){
                curr_sum += arr[right++];
            }else{
                curr_sum -= arr[low++];
            }
        }
        return vector<int>{-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends