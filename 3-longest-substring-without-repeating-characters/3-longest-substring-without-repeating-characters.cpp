class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char a[256] = {0};
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right < s.length()){
            a[s[right]]++;
            while(a[s[right]] > 1){
                a[s[left]]--;
                left++;
            }
            
            ans = max(ans,right - left + 1);
            right++;
        }
        return ans;
    }
};