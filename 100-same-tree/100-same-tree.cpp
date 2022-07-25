/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool sametree(TreeNode* p,TreeNode* q){
        if(p == NULL && q == NULL){
            return true;
        }
        if(p != NULL && q == NULL){
            return false;
        }
        if(p == NULL && q != NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }else{
            return sametree(p->left,q->left) && sametree(p->right,q->right);
        }
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return sametree(p,q);
    }
    
};