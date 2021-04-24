/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root -> val > p->val && root-> val > q->val)
            return lowestCommonAncestor(root-> left , p , q);
        
        if (root -> val < p-> val && root-> val < q-> val)
           return lowestCommonAncestor(root-> right , p , q);
        
        return root;
    }
};


//                  Iterative

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		int pVal = p->val;
        int qVal = q->val;
        
        while(root) {
            
            int rootVal = root->val;
            if(rootVal > pVal && rootVal > qVal)
                root = root->left;
            else if(rootVal < pVal && rootVal < qVal)
                root = root->right;
            else
                return root;
        }
        
        return NULL;
}

