class Solution {
public:
    vector<vector<int>> res;
    void ans(vector<int>& candidates, int target,vector<int>& pre,int l)
    {
       
        if(l>=candidates.size())
        {
            if(target==0)
        {
            res.push_back(pre);
        }
            return ;
        }
        if(candidates[l]<=target)
        {
            pre.push_back(candidates[l]);
            ans(candidates,target-candidates[l],pre,l);
            pre.pop_back();
        }
        ans(candidates,target,pre,l+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>pre;
        ans(candidates,target,pre,0);
        return res;
    }
};