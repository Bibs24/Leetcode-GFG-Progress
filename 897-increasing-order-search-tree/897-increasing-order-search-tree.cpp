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
    void solve(TreeNode* root, vector<int> &ans){
        if(root ==NULL) return;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> res;
        solve(root,res);
        sort(begin(res),end(res));
        int n = res.size();
        TreeNode* BST = new TreeNode(res[0]);
        TreeNode* t = BST;
        for(int i=1;i<n;i++){
            TreeNode* ok = new TreeNode(res[i]);
            t->right = ok;
            t = ok;
        }
        return BST;
    }
};