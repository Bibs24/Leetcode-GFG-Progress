class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = BinarySearch(nums, target);
        
        if(first == nums.size() || nums[first] != target) return {-1,-1};
        
        int last = BinarySearch(nums,target + 1);
        
        return {first,last-1};
    }
    
    int BinarySearch(vector<int>&nums, int target){
        int l = 0;
        int r = nums.size();
        
        while(l < r){
            int m = (l+r)/2;
            if(nums[m] < target) l = m + 1;
            else{
                r = m;
            }
        }
        return l;
    }
};