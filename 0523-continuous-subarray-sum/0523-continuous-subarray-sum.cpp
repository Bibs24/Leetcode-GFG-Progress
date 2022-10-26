class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long curr = 0;
        unordered_map<int,  int> mp;
        mp[0]={-1};
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            int rem = curr % k;
            if(mp.count(rem)){
                if(i-mp[rem] >=2){
                    return true;
                }
                
            }
            
            else mp[rem] = i;
        }
        return false;
    }
};