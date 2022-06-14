class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8) return false;
        string spe = "!@#$%^&*()-+";
        bool lower = false, upper = false, digit = false, special = false;
        for(char c: password){
           if('a' <= c && c <= 'z') lower = true;
        if('A'<= c && c <= 'Z')upper= true;
            if('0'<= c && c <= '9') digit = true;
            for(char s:spe){
                if(c == s) special = true;
            }  
        }
        if(!lower || !upper || !digit || !special){
            return false;
        }
        
        for(int i=1;i<password.size();i++){
            if(password[i] == password[i-1]) return false;
        }
        return true;
    }
};