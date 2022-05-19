class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int count = 0;
        for(int i=0; i< nums.size();i++){
            if(nums[i] != nums[0] && nums[i] != nums.back()){
                count++;
            }
        }
        return count;
    }
};