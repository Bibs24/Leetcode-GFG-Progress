// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    vector<int> vec;
    vector<pair<int,int>> vec1;
    int i=1;
    for(auto a:arr){
        int q = a[0];
        int p = a[1];
        vec1.push_back({q+p,i});
        i++;
    }
    sort(vec1.begin(),vec1.end());
    for(auto i: vec1){
        int res = i.second;
        vec.push_back(res);
    }
    return vec;
    
}