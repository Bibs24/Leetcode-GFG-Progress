// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String s = br.readLine().trim();
            String []S = s.split(" ");
            int N = Integer.parseInt(S[0]);
            int start_x = Integer.parseInt(S[1]);
            int start_y = Integer.parseInt(S[2]);
            int step = Integer.parseInt(S[3]);
            Solution ob = new Solution();
            double ans = ob.findProb(N, start_x, start_y, step);
            System.out.println(String.format("%.6f", ans));           
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    boolean isOk(int r,int c, int n){
        if(r<0 || r>=n || c<0 || c>=n){
            return false;
        }
        return true;
    }
    int [][] direct = {{2,1},{-2,1},{2,-1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
    public double findProb(int n, int r, int c, int k)
    {
        double [][][] dp = new double[k+1][n][n];
        dp[0][r][c] = 1;
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                for(int st=0;st<n;st++){
                    for(int[]d : direct){
                        int or = j + d[0];
                        int oc = st + d[1];
                        if(isOk(or,oc,n)){
                            dp[i][j][st] += dp[i-1][or][oc]/8.0;
                        }
                    }
                }
            }
        }
        double ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans += dp[k][i][j];
            }
        }
        return ans;
}
}