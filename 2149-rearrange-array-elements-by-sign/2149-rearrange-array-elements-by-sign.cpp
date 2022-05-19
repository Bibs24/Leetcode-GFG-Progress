class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] >= 0){
                a.push_back(nums[i]);
            }else{
                 b.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;
    }
    
};