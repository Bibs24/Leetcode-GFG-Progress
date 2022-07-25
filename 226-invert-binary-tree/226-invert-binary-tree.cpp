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
    TreeNode* invertTree(TreeNode* root) {
        // if(root == nullptr) return nullptr;
        // TreeNode *temp = invertTree(root->right);
        // root->right = invertTree(root->left);
        // root->left = temp;
        // return root;
        if(root == NULL) return NULL;
        queue<TreeNode*> node;
        node.push(root);
        while(!node.empty()){
            int n = node.size();
            for(int i=0;i<n;i++){
                TreeNode* temp = node.front();
                node.pop();
                swap(temp->left,temp->right);
                if(temp->left){
                    node.push(temp->left);
                }
                if(temp->right){
                    node.push(temp->right);
                }
            }
           
        }
         return root;
    }
};