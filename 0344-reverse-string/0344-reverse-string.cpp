class Solution {
public:
    void helper(vector<char>&s, int left, int right){
        if(left>=right) return;
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        helper(s, ++left, --right);
    }
    void reverseString(vector<char>& s) {
        //1st
        // reverse(s.begin(),s.end());
        //2nd
        // stack<char> temp;
        // int i=0;
        // while(i<s.size()){
        //     temp.push(s[i++]);
        // }
        // s.clear();
        // while(!temp.empty()){
        //     s.push_back(temp.top());
        //     temp.pop();
        // }
        int left = 0;
        int right = s.size()-1;
        helper(s,left,right);
        
    }
};