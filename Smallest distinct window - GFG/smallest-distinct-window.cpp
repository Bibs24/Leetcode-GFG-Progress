// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here
        int n = str.size();
        set<char> s;
        unordered_map<char,int> f;
        for(int i=0;i<n;i++){
            s.insert(str[i]);
        }
        int N = s.size();
        int j=0,cnt=0;
        int m = n;
        for(int k=0;k<n;k++){
            f[str[k]]++;
            if(f[str[k]] == 1){
                cnt++;
            }
            while(f[str[j]] > 1){
                f[str[j]]--;
                j++;
            }
            if(cnt == N){
                m = min(m,k-j+1);
            }
        }
        return m;
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends