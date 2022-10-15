int cache[101][27][101][101];
class Solution {
public:
  int getLengthOfOptimalCompression(string s, int k) {    
    memset(cache, -1, sizeof(cache));
    function<int(int, int, int, int)> dp = 
      [&](int i, int last, int len, int k) {
      if (k < 0) return INT_MAX / 2;
      if (i >= s.length()) return 0;      
      int& res = cache[i][last][len][k];
      if (res != -1) return res;
      if (s[i] - 'a' == last) { 
        int carry = (len == 1 || len == 9 || len == 99);
        res = carry + dp(i + 1, last, len + 1, k);
      } else {
        res = min(1 + dp(i + 1, s[i] - 'a', 1, k),
                      dp(i + 1, last, len, k - 1)); 
      }
      return res;
    };
    return dp(0, 26, 0, k);
  }
};