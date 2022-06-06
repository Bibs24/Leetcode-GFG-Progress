// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        //code here
        vector<int> vec(K, 0);
        long long ans=0;
        for(int i=0; i<n; i++){
            A[i] %= K;
            vec[A[i]]++;
        }
        if(K&1){
            ans = vec[0]*(vec[0]-1)/2;
            for(int i = 1; i<=K/2; i++){
                ans += vec[i]*vec[K-i];
            }
        }
        else{
            ans = vec[0]*(vec[0]-1)/2 + vec[K/2]*(vec[K/2]-1)/2;
            for(int i = 1; i<K/2; i++){
                ans += vec[i]*vec[K-i];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends