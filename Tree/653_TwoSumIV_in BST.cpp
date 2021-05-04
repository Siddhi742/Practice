/**

https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true
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
    bool findTarget(TreeNode* root, int k) {
        TreeNode *temp= root;
        vector<int>v1;
        queue<TreeNode*>que;
        que.push(temp);
        v1.push_back(temp->val);
        while(!que.empty())
        {   if(temp!=NULL)
                {
                    if(temp->left!=NULL)
                    {
                        v1.push_back(temp->left->val);
                    }
                    if(temp->right !=NULL)
                    {
                        v1.push_back(temp->right->val);
                        
                    }
                    que.push(temp->left);
                    que.push(temp->right);
                }
            que.pop();
            temp=que.front();
            
        }
        for(int i=0;i<v1.size()-1;i++)
        {   cout<<v1[i]<<" ";
            for(int j=i+1;j<v1.size();j++)
            {
                if(v1[i]+v1[j]==k)
                    return true;
            }
        }
        return false;
    }
};