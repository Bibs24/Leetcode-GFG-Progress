// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int helper(int arr[],int n,int k){
        if(k == 0) return 0;
        int i=0,j=0,cnt=0;
        unordered_map<int,int> mp;
        while(j<n){
            mp[arr[j]]++;
            while(mp.size()>k){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            cnt += (j-i+1);
            j++;
        }
        return cnt;
    }
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int k = s.size();
        return helper(arr,n,k)-helper(arr,n,k-1);
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends