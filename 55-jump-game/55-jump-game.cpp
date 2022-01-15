class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        if(nums.size()<=1)
        {
            return true;
        }
        int good=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            int x=nums[i]+i;
          //  cout<<x<<"  "<<good<<endl;
            if(x>=good)
            {
                good=i;
                if(i==0)
                {
                    return true;
                }
            }
        }
        return false;
    }
};