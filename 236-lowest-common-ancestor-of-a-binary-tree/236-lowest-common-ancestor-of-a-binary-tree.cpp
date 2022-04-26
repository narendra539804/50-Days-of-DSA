/**
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
    bool pre(TreeNode *root,vector<TreeNode*>&nums,TreeNode*p)
    {
        if(root==NULL)
        {
            return false;
        }
        nums.push_back(root);
        if(root->val==p->val)
        {
            return true;
        }
        if(pre(root->left,nums,p)==true or pre(root->right,nums,p)==true)
        {
            return true;
        }
        nums.pop_back();
        return false;
        
       
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        vector<TreeNode*>nums1,nums2;
        if(pre(root,nums1,p)==false or pre(root,nums2,q)==false)
        {
             return NULL;
        }
        for(auto x:nums1)
        {
            cout<<x->val<<"  ";
        }
        cout<<endl;
        for(auto y:nums2)
        {
            cout<<y->val<<"  ";
        }
        TreeNode *res=NULL;
        for(int i=0;i<nums1.size() and i<nums2.size();i++)
        {
            if(nums1[i]==nums2[i])
            {
                res=nums1[i];
            }
        }
        return res;
        
    }
};