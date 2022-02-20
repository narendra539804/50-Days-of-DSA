class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        int count=0;
        for(int i=0;i<intervals.size();i++)
        {
            int x=0;
            for(int j=0;j<intervals.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(intervals[j][0]<=intervals[i][0] and intervals[j][1]>=intervals[i][1] )
                {
                    x++;
                }
            }
            if(x==0)
            {
                count++;
            }
        }
        return count;
    }
};