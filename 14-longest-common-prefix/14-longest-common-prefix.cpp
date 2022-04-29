class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
        if(n == 0) return "";
        string pre = strs[0];
        for(int i=0;i<n;i++){
            while(strs[i].find(pre) != 0){
                pre.pop_back();
            }
        }
        return pre;
    }
};