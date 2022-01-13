class Solution {
public:
    static bool compare(vector<int>&one,vector<int>&two)
    {
       return (one[1]<two[1]);
       
    }
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end(),compare);
        int reach=points[0][1],tot=1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]>reach)
            {
                tot++;
                reach=points[i][1];
            }
            else
            {
                
            }
        }
        return tot;
        
    }
};