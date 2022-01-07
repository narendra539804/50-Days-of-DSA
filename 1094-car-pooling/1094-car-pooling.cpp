class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        bool res=true;
        vector<int>vp(1e5,0);
        for(int i=0;i<trips.size();i++)
        {
            vp[trips[i][1]]+=trips[i][0];
            vp[trips[i][2]]-=trips[i][0];
        }
        int tot=0;
        for(int i=0;i<vp.size();i++)
        {
            tot+=vp[i];
            if(tot>capacity)
            {
                return false;
            }
         }
               return res;
        
    }
};