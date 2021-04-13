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
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<pair<TreeNode* , int >>q;
        q.push(make_pair(root,1));
        while(!q.empty())
        {
            TreeNode * n = q.front().first;
            int depth = q.front().second;
            q.pop();
            if(!n-> left && !n->right) return depth;
            if(n -> left ) q.push(make_pair( n -> left , depth+1 ));
            if(n ->right ) q.push(make_pair( n -> right ,depth+1 ));
        }
        return -1;
    }
};
