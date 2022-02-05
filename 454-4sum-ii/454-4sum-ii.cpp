class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        unordered_map<int,int>mp1;
        for(auto a:nums1)
        {
            for(auto b:nums2)
            {
                int sum=a+b;
                mp1[sum]++;
            }
        }
         for(auto a:nums3)
        {
            for(auto b:nums4)
            {
                if(mp1.find(0-a-b)!=mp1.end())
                {
                    count=count+mp1[0-a-b];
                }
            }
        }
        return count;
    }
};