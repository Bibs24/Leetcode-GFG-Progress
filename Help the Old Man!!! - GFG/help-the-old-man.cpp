// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
int p;
    vector<int> res;
public:
    vector<int> shiftPile(int N, int n){
        // code here
        p = n;
        solve(N,1,2,3);
        return res;
    }
    void solve(int disc,int s,int m,int e){
        if(disc == 0) return;
        if(disc>1) solve(disc-1,s,e,m);
        --p;
        if(p==0) res = {s,e};
        if(disc>1) solve(disc-1,m,s,e);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends