class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)
                {
                    break;
                }
                count++;
            }
            pq.push(make_pair(count,i));
        }
         vector<int> res;
        for(int i=0;i<k;i++)
        {
            pair<int,int> x=pq.top();
            res.push_back(x.second);
            pq.pop();
        }
        return res;
    }
};