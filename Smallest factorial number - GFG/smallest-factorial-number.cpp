// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int Zeroes(int num){
            int z = 0;
            while(num >= 5){
                int t = num/5;
                z += t;
                num /= 5;
            }
            return z;
        }
        int findNum(int n)
        {
            int low = 1, high = 5*n;
            int ans = -1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(Zeroes(mid) >= n){
                    ans = mid;
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            return ans;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends