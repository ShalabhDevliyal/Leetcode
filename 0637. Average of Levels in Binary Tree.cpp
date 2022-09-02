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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        double sum=0;
        
        queue<TreeNode *>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            sum=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            
                TreeNode *temp=q.front();
                q.pop();
                sum+=temp->val;
                
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                
            }
            v.push_back(sum/n);
            
            
        }
        return v;
    }
};