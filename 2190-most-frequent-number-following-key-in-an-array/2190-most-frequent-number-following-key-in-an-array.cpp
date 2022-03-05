class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                if(i+1<nums.size())
                {
                    mp[nums[i+1]]++;
                }
            }
        }
        int max=INT_MIN,ans=0;
        for(auto x:mp)
        {
            if(x.second>max)
            {
                ans=x.first;
                max=x.second;
            }
        }
        return ans;
        
    }
};