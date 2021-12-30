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
    int tot=0;
    bool isleaf(TreeNode *r)
    {
        if(r->left==NULL and r->right==NULL)
        {
            return true;
        }
        return false;
    }
    void preorder(TreeNode *root,bool res)
    {
        if(root!=NULL)
        {
            if(isleaf(root)==true && res==true)
            {
                tot+=root->val;
            }
            preorder(root->left,true);
            preorder(root->right,false);
        }
    }
    int sumOfLeftLeaves(TreeNode* root)
    {
        preorder(root,false);
        return tot;
    }
};