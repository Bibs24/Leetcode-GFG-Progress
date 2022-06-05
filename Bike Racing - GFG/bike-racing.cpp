// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long start = 0;
        long end = max(L,M);
        long res = 0;
        while(start<=end){
            long midp = (end + start)/2;
            long temp = 0;
            for(long i=0;i<N;i++){
                if(H[i]+A[i]*midp >= L){
                    temp += H[i]+A[i]*midp;
                }
            }
            if(temp >= M){
                res = midp;
                end = midp - 1;
            }
            else{
                start = midp + 1;
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
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends