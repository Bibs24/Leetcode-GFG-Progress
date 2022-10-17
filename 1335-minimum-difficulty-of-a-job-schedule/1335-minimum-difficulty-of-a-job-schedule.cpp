class Solution {
public:
    int dp[305][15];
    
    int helper(vector<int>& arr, int i, int n, int k)
    {
        // base case
        
        if(i == n && k == 0)
            return 0;
        
        // if exactly k partition is not possible
        
        if(k <= 0)
            return INT_MAX;
        
        // if already calculated
        
        if(dp[i][k] != -1)
            return dp[i][k];
        
        // maxi will store the maximum of subarray taken
        
        int maxi = 0;
        
        // mini will store the minimum difficulty
        
        int mini = INT_MAX;
        
        // partition the array between [i, n - 1] and call for remaining elements
        
        for(int j = i; j < n; j++)
        {
            // update maxi
            
            maxi = max(maxi, arr[j]);
            
            // call for remaining elements
            
            int temp = helper(arr, j + 1, n, k - 1);
            
            // if it possible to partition into exactly k subarrays, then update mini
            
            if(temp != INT_MAX)
            {
                mini = min(mini, maxi + temp);
            }
        }
        
        // store the res and return it
        
        return dp[i][k] = mini;
    }
    
    int minDifficulty(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        // initialize dp with -1
        
        memset(dp, -1, sizeof(dp));
        
        int mini = helper(arr, 0, n, k);
        
        // if it is not possible to partition into exactly k subarrays
        
        if(mini == INT_MAX)
            return -1;
        
        return mini;
    }
};