// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        if(A.length() != B.length()) return -1;
        int res = 0, res1 = 0;
        int i = A.length() - 1, j = B.length() - 1;
        int count = 0;
        while(i >= 0 && j >= 0){
            res += A[i];
            res1 += B[j];
            i--;
            j--;
        }
        if(res1 != res){
            return -1;
        }
        i = A.length() - 1;
        j = B.length() - 1;
        while(i>=0 && j>=0){
            if(A[i] == B[j]){
                i--;
                j--;
            }
            else{
                count++;
                i--;
            }
        }
        return count;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends