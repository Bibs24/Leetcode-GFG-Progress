class Solution {
public:
    bool helper(vector<vector<char>>& board, string &s, int index, int i, int j){
        if(index == s.size()) return true;
        
        if(i<0 || i>=board.size() || j<0 || j>= board[0].size() || board[i][j] != s[index]){
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = '1';
        
        bool res = helper(board,s,index+1,i+1,j) ||helper(board,s,index+1,i-1,j) ||helper(board,s,index+1,i,j+1) ||helper(board,s,index+1,i,j-1);
        
        board[i][j] = temp;
        
        return res;
            
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == word[0] && helper(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};