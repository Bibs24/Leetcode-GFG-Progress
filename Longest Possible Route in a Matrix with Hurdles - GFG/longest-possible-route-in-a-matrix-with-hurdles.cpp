// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void DFS(int i,int j,int x,int y, vector<vector<int>> &mat,int n,int m,int len,int &res){
        if(i>=n || j>=m || i<0 || j<0 || mat[i][j] == 0){
            return;
        }
        if(i==x && y==j){
            res = max(res,len);
            return;
        }
        mat[i][j] = 0;
        DFS(i+1,j,x,y,mat,n,m,len+1,res);
        DFS(i,j-1,x,y,mat,n,m,len+1,res);
        DFS(i-1,j,x,y,mat,n,m,len+1,res);
        DFS(i,j+1,x,y,mat,n,m,len+1,res);
        mat[i][j] = 1;
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int res = -1;
        int n = matrix.size(), m = matrix[0].size();
        DFS(xs,ys,xd,yd,matrix,n,m,0,res);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends