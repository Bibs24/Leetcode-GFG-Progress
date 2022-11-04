class Solution {
public:
    string reverseStr(string s, int k) {
        int l=0;
        int r = min(k,(int)s.size());
        while(l<s.size()){
            reverse(s.begin()+l,s.begin()+r);
            l+=2*k;
            r = min(k+l,(int)s.size());
        }
        return s;
    }
};