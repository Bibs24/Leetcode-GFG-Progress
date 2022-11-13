class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        vector<string> stor;
        
        while(i<n){
            string res = "";
            while(i<n && s[i] == ' ') i++;
            while(i<n && s[i] != ' ') res += s[i++];
            
            //safe condition
            
            if(res == "" || res == " ") continue;
            stor.push_back(res);
        }
        
        reverse(stor.begin(),stor.end());
        
        string ans = stor[0];
        
        for(int i=1;i<stor.size();i++){
            
            ans += (" "+stor[i]);

        }
        
        return ans;
        
    }
};