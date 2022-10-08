class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        double finalans;
        vector<int> stor;
        stor.insert(stor.begin(),nums1.begin(),nums1.end());
        stor.insert(stor.end(),nums2.begin(),nums2.end());
        sort(stor.begin(),stor.end());
        int i = 0;
        int n = stor.size();
        if(n%2 == 0){
            int mid = (i+n)/2-1;
            int mid2 = mid + 1;
            ans = (stor[mid]+stor[mid2]);
            finalans = ans/2;
            return finalans;
        }else{
            int mid = (i+n)/2;
            ans = stor[mid];
            return ans;
        }
    }
};