class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size()/2;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(find(arr.begin(),arr.end(),x)!=arr.end())
            {
                continue;
            }
            arr.push_back(x);
            if(count(nums.begin(),nums.end(),x)>n)
            {
                return x;
            }
        }
        return 1;   
    }
};