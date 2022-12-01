class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt_l = 0, cnt_r = 0;
        int l = 0;
        int r = s.size()-1;
        
        while(l<r){
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] =='E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U'){
                cnt_l++;
}
            if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U'){
     cnt_r++;
        }
            l++;
            r--;
    }
        
        return cnt_l == cnt_r;
    }
};