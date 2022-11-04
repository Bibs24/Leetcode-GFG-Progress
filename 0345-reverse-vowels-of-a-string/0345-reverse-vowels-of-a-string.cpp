class Solution {
public:
    void helper(string &str, string &ans){
        for(int i=str.size()-1;i>=0;i--){
            ans += str[i];
        }
    }
    string reverseVowels(string s) {
        string temp = "";
        string fin="";
        for(auto &i: s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' ||i == 'U'){
                temp += i;
            }
        }
        string res;
        helper(temp,res);
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||s[i] == 'U'){
        //         fin+=res[i];
        //     }else{
        //         fin+=s[i];
        //     }
        // }
        int j=0;
        for(auto &i:s){
             if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' ||i == 'U'){
                i = res[j++];
            }
        }
        return s;
    }
};