class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int sum=original,x=original;
        while(true)
        {
            if(s.find(x)==s.end())
            {
                break;
            }
            
            sum+=x; 
            x=x*2;
           
        }
        return sum;
    }
};