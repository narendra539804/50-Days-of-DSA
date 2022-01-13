class Solution {
public:
     static bool compare(vector<int>&one,vector<int>&two)
    {
       return (one[1]<two[1]);
       
    }
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end(),compare);
        int reach=0,tot=0;
        for(int i=0;i<points.size();i++)
        {
            reach=points[i][1];
            int skip=0;
            tot++;
            for(int j=i+1;j<points.size();j++)
            {
                int x=points[j][0];
               // cout<<x<<"  "<<reach<<endl;
                if(x<=reach)
                {
                    skip++;
                    continue;
                }
                else{
                    break;
                }
            }
            //cout<<skip<<"  ";
            i=i+skip;
        }
        return tot;
        
    }
};