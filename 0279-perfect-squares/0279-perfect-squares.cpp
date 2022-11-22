class Solution {
public:
     int calculate(int i,int n,vector<int>& dp){
        if(n==0)
            return 0;
        if(i*i>n)
            return INT_MAX-1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=min(1+calculate(i,n-i*i,dp),calculate(i+1,n,dp));
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return calculate(1,n,dp);
    }
};