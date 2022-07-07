// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int ok(int n){
	    if(n == 1) return 0;
	    int c = 2, res = 0;
	    while(n > 1){
	        if(n % c == 0){
	            res++;
	            n/=c;
	        }else{
	            c++;
	        }
	    }
	    return res-1;
	}
    bool brainGame(vector<int>nums) {
        // Code here
        int sum = 0, l = 0, r = 0;
        for(int i=0; i< nums.size();i++){
            l = ok(nums[i]);
            r ^= l;
        }
        if(r != 0) return 1;
        return 0;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends