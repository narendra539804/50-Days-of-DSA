class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string>res;
        for(int i=0;i<nums.size();)
        {
            int start=nums[i];
            int end=nums[i];
            i++;
            while(i<nums.size())
            {
              if((end+1)==nums[i])
              {
                  end=nums[i];
              }
              else{
                  break;
              }
             i++;
            }
            if(start==end)
            {
                res.push_back(to_string(start));
            }
            else{
                string s=to_string(start)+"->"+to_string(end);
                res.push_back(s);
            }
        }
        return res;
    }
};