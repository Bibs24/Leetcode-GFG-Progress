class Solution {
public:
    string removeDuplicates(string s) {
         for(int i=0; i< s.length(); i++){
        if(s[i]==s[i+1]){
           s.erase(s.begin() + i, s.begin() + i+2);
         if(i>0) i= i-2;
         else i =i-1;
        }
        }
        return s;
    }
};