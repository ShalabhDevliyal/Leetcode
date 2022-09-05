/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node *>q;
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node *temp_node=q.front();
                temp.push_back(temp_node->val);
                q.pop();
                
               for(auto it:temp_node->children)
                   q.push(it);
                
            }
            v.push_back(temp);
        }
        return v;
    }
};