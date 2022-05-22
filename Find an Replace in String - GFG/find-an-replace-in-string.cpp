// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
        int off = 0;
        for(int i=0;i<Q;i++){
            int l = sources[i].size();
            int idx = index[i];
            if(S.substr(idx+off,l) == sources[i]){
                int a = S.size();
                S = S.substr(0,idx+off)+targets[i]+S.substr(min(idx+l+off,a));
                off = off+targets[i].size()-l;
                
            }
        }
        return S;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends