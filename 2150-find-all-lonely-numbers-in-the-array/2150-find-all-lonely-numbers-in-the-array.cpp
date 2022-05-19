class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> freq(1e6 + 2,0);
        for(auto &x: nums) freq[x]++;
        vector<int> ans;
        for(int i=0;i<=1e6;i++){
            if(!i){
                if(freq[i] == 1 && freq[i+1] == 0){
                    ans.push_back(i);
                }
            }
            else if(freq[i] == 1 && (i && !freq[i-1]) && !freq[i+1]){
                    ans.push_back(i);
                }
            }
        
        return ans;
    }
};