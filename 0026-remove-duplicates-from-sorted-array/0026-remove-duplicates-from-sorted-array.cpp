class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a{0}, b{0};
        while(b < nums.size())
            {
                while(b < nums.size() -1 && nums[b] == nums[b+1])   b++;
                swap(nums[a], nums[b]);
                a++; b++;
            }
        return a;
    
    }
};