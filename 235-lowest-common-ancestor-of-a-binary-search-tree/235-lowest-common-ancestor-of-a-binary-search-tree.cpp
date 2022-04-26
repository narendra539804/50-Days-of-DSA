class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    
        if(root==NULL)
        {
            return NULL;
        }
        int x=root->val;
        if(x<p->val and x<q->val)
        {
           return lowestCommonAncestor(root->right,p,q);   
        }
        else if(x>p->val and x>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);   
        }
        return root;
    
    }
};