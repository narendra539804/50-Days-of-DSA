class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        set<pair<int,int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int x=nums[j]-nums[i];
                if(x==k)
                {
                    s.insert({nums[i],nums[j]});
                }
            }
        }
        return s.size();
    }
};