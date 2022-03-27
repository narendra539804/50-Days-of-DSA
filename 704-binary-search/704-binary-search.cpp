class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        bool pres=binary_search(nums.begin(),nums.end(),target);
        if(pres==false)
        {
            return -1;
        }
        auto itr=lower_bound(nums.begin(),nums.end(),target);
        int i=itr-nums.begin();
        return i;
    }
};