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
    
    string tree2str(TreeNode* root) {
        string s=to_string(root->val);
        if(root->left)
        {
            s+='(';
            s+=tree2str(root->left);
            s+=')';
        }
        if(root->right)
        {
            if(root->left==NULL)
            {
                s+="()";
            }
            s+='(';
            s+=tree2str(root->right);
            s+=')';
        }
        
    return s;
    }
};