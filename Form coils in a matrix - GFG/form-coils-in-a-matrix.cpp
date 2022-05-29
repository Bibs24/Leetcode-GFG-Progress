// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        // code here
        vector<vector<int>> t;
        vector<vector<int>> vec;
        int a = 1;
        for(int i=0;i<4*n;++i){
            vector<int> vec1;
            for(int j=0;j<4*n;++j){
                vec1.push_back(a++);
            }
            vec.push_back(vec1);
        }
        int top = 0;
        int left = 0;
        n = 4*n;
        int bottom = n-1;
        int right = n-1;
        vector<int> s1;
        vector<int> s2;
        a = 0;
        while(left <= right){
            for(int i=top;i<=bottom;++i){
                if(a%2 == 0){
                    s1.push_back(vec[i][left]);
                }else{
                    s2.push_back(vec[i][left]);
                }
            }
            left++;
            for(int i=bottom;i>=top;--i){
                if(a%2 == 0){
                    s2.push_back(vec[i][right]);
                }else{
                    s1.push_back(vec[i][right]);
                }
            }
            right--;
            for(int i=left;i<=right;++i){
                if(a%2 == 0){
                    s1.push_back(vec[bottom][i]);
                }else{
                    s2.push_back(vec[bottom][i]);
                }
            }
            bottom--;
            for(int i=right;i>=left;--i){
                if(a%2 == 0){
                    s2.push_back(vec[top][i]);
                }else{
                    s1.push_back(vec[top][i]);
                }
            }
            top++;
            a++;
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        t.push_back(s2);
        t.push_back(s1);
        return t;
         
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends