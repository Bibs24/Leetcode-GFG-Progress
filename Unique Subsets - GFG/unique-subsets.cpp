// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    vector<vector<int>> res;
    public:
    void UniqueSubsets(int i, int n, vector<int>& ans, vector<int> arr){
        if(i == n){
            res.push_back(ans);
            return;
        }
        if(i < n)
        {
            ans.push_back(arr[i]);
            UniqueSubsets(i+1,n,ans,arr);
            while(i<n-1 && arr[i] == arr[i+1]) i++;
            ans.pop_back();
        }
        UniqueSubsets(i+1,n,ans,arr);
    }
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        UniqueSubsets(0,n,ans,arr);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends