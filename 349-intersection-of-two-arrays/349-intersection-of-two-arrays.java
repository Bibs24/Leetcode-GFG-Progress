class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001] = {0};
        for(auto x: nums1){
            arr[x]++;
        }
        vector<int> ans;
        for(auto x: nums2){
            if(arr[x] !=0) ans.push_back(x),arr[x]=0;
        }
        return ans;
    }
};