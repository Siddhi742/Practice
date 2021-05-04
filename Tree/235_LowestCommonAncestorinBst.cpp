/**

https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.


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
        if((p->val >=root->val and q->val<=root->val) or (p->val <=root->val and q->val>=root->val))
                return root;
        else
        {   
            if(p->val >root->val and q->val > root->val)
                return(lowestCommonAncestor(root->right,p,q));
            else
                return(lowestCommonAncestor(root->left,p,q));
        }
    }
};