class Solution {
public:
    void reverseString(vector<char>& s) {
        //1st
        // reverse(s.begin(),s.end());
        //2nd
        stack<char> temp;
        int i=0;
        while(i<s.size()){
            temp.push(s[i++]);
        }
        s.clear();
        while(!temp.empty()){
            s.push_back(temp.top());
            temp.pop();
        }
    }
};