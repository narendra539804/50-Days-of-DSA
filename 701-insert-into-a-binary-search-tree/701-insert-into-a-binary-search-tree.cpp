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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        TreeNode *i=new TreeNode(val);
        if(root==NULL)
        {
            return i;
        }
        TreeNode *r=root,*t=r;
        while(r!=NULL)
        {
            if(r->val<val)
            {
                t=r;
                r=r->right;
            }
            else
            {
                t=r;
                r=r->left;
            }
        }
        cout<<t->val<<"  ";
        if(t->val>val)
        {
            t->left=i;
        }
        else
        {
            t->right=i;
        }
        return root;
    }
};