class Solution {
public:
    int longestPalindrome(vector<string>& words) {
          int count=0;
     
        unordered_map<string,int> mp;
        for(auto w:words) {
            mp[w]++;
        }
        
     
        bool flag=false;
        for(auto x:words) {
            string wrd=x;
            reverse(wrd.begin(),wrd.end());
          
            if(wrd!=x && mp[x]>0 && mp[wrd]>0) {
                mp[x]--;
                mp[wrd]--;
                count+=4;
            }
            else if(wrd==x && mp[x]>1) {
                mp[x]-=2;
                count+=4;
            } 
            else if(wrd==x && !flag && mp[x]>0) {
                mp[x]--;
                count+=2;
                flag=true;
            }
        }
        return count;
    }
};