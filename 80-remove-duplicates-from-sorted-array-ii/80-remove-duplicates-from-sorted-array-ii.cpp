class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i=0;
        for(auto x:nums)
        {
           if(i<2 or x>nums[i-2])
           {
               nums[i]=x;
               i++;
           }
        }
        return i;
    }
};