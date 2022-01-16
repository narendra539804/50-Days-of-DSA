class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        vector<int>res(nums.begin(),nums.end());
        int ic1=0;
        int ans=INT_MAX;
        for(auto x:nums)
        {
            ic1+=x;
            res.push_back(x);
        }
        int start=0;
        int end=0;
        int wc0=0;
        for(;end<ic1;end++)
        {
            if(res[end]==0)
            {
                wc0++;
            }        
        }
        if(wc0<ans)
        {
            ans=wc0;
        }
        for(;end-ic1<res.size();end++)
        {
            if(start>=res.size() or end>=res.size())
            {
                break;
            }
            if(res[start]==0)
            {
                wc0--;
            }
            if(res[end]==0)
            {
                wc0++;
            }
            start++;
            if(wc0<ans)
        {
            ans=wc0;
        }
        }
        return ans;
        
    }
};