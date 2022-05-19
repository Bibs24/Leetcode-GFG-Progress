class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b;
        for(auto it: nums){
            if(it >= 0) a.push_back(it);
            else 
                b.push_back(it);
        }
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;
    }
    
};