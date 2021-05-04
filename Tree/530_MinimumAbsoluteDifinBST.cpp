/**

https://leetcode.com/problems/minimum-absolute-difference-in-bst/
Input: root = [4,2,6,1,3]
Output: 1
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
    int getMinimumDifference(TreeNode* root) {
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
        
        sort(v1.begin(),v1.end());
        int min=v1[v1.size()-1];
        for(int i=0;i<v1.size()-1;i++)
        {
            if(min>v1[i+1]-v1[i])
                min=v1[i+1]-v1[i];
        }
        return min;
    }
};