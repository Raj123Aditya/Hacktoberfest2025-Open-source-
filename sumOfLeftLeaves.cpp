class Solution {
    int ans = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return ans;
    }

    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        if(root->left && !root->left->left && !root->left->right) ans += root->left->val;
        dfs(root->left);
        dfs(root->right);
        return ans;
    }
};
