// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
        vector<int> inorder(N+1,0);
        vector<vector<int>>a(N+1);
        for(int i=0;i<M;i++){
            inorder[mat[i][0]]++;
            a[mat[i][1]].push_back(mat[i][0]);
        }
        int res = 0;
        queue<int> q;
        for(int i=1;i<=N;i++){
            if(inorder[i]==0) q.push(i);
        }
        while(!q.empty()){
            ++res;
            int s = q.size();
            while(s--){
                int c = q.front();
                q.pop();
                for(auto x:a[c]){
                    inorder[x]--;
                    if(inorder[x] == 0) q.push(x);
                }
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends