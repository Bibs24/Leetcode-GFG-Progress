class Solution {
public:
    string reverseWords(string s) {
        string B = "";
    int n = s.size();
    int i=0;
    while(i<n){
        while(i<n && s[i] == ' ') i++;
        if(i >= n) break;
        int j = i+1;
        while(j<n && s[j] != ' ')j++;
        string sub = s.substr(i,j-i);
        if(B.size() == 0) B = sub;
        else B = sub + " " + B; 
        i = j+1;
    }
    return B;
    }
};