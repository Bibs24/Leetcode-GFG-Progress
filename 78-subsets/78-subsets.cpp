class Solution {
public:
    vector<vector<int>> final;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        for(int i=0;i<(1<<nums.size());i++){
            solve(nums,i);
        }
        return final;
    }
    void solve(vector<int> &res,int n){
        vector<int> ans;
        for(int i=0;i<res.size();i++){
            if(n&1){
                ans.push_back(res[i]);
            }
            n = n>>1;
        }
        final.push_back(ans);
    } 
};