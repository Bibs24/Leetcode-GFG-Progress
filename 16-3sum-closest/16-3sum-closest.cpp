class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0;
    int n1 = nums.size();
    int closest = INT_MAX;
    for(int i=0;i<n1;i++){
        int start = i+1;
        int end = n1-1;
        while(start < end){
            int tempSum = nums[i] +nums[start] + nums[end];
            if(abs(tempSum - target) < closest){
                ans = tempSum;
                closest = abs(tempSum - target);
            }
            else if(tempSum == target) return target;
            if(tempSum > target) end--;
            else start++;
        }
    }
    return ans;
    }
};