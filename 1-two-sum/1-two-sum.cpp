class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int ok = target - nums[i];
            if(mp.find(ok) != mp.end()){
                res.push_back(i);
                res.push_back(mp[ok]);
                break;
            }else{
                mp[nums[i]] = i;
            }
        }
        
        return res;
    }
};