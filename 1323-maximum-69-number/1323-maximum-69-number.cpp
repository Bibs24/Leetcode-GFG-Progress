class Solution {
public:
    int maximum69Number (int num) {
        string numb = to_string(num);
        for(int i=0;i<numb.size();i++){
            if(numb[i] == '6'){
                numb[i] = '9';
                break;
            }
        }
        return stoi(numb);
    }
};