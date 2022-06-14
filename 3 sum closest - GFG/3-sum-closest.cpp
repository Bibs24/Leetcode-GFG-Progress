// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
        sort(A,A+N);
        int ans = 0;
    int closest = INT_MAX;
    for(int i=0;i<N;i++){
        int start = i+1;
        int end = N-1;
        while(start < end){
            int tempSum = A[i] +A[start] + A[end];
            if(abs(tempSum - X) < closest){
                ans = tempSum;
                closest = abs(tempSum - X);
            }
            else if(tempSum == X) return X;
            if(tempSum > X) end--;
            else start++;
        }
    }
    return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}  // } Driver Code Ends