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
    void dfs(TreeNode * root , string ans,vector<string>&v)
    {
        if(!root)
            return;
        if(!root -> left and !root-> right)
        {
            ans += to_string(root->val);
            v.push_back(ans);
            return;
        }
        ans = ans + to_string(root->val)+"->" ;
        dfs(root -> left , ans, v);
        dfs(root -> right , ans, v); 
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        dfs(root , "",v);
        return v;
    }
};
