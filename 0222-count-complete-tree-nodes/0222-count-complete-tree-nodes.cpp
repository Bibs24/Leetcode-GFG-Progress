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
    int countNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        int left_height = 0;
        int right_height = 0;
        
        TreeNode *leftptr = root;
        TreeNode *rightptr = root;
        
        while(leftptr){
            left_height++;
            leftptr = leftptr->left;
        }
        
        while(rightptr){
            right_height++;
            rightptr = rightptr->right;
        }
        
        if(left_height == right_height){
            return pow(2,right_height) - 1;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};