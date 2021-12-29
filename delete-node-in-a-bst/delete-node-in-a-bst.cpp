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
    TreeNode *getsuc(TreeNode *root)
    {
        root=root->right;
        while(root!=NULL and root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
       if(root==NULL)
       {
           return root;
       }
        if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        else if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        else
        {
            if(root->left==NULL)
            {
                TreeNode *p=root->right;
                delete root;
                return p;
            }
            if(root->right==NULL)
            {
                TreeNode *p=root->left;
                delete root;
                return p;
            }
            else{
                TreeNode *p=getsuc(root);
                root->val=p->val;
                root->right=deleteNode(root->right,p->val);
            }
        }
        return root;
    }
};