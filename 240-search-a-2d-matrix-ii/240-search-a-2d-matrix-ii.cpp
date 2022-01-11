class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
    int i;
    bool x=false;
    for(i=0;i<matrix.size();i++)
    {
        int y=matrix[i][0];
        if(y>target)
        {
            return false;
        }
        x=binary_search(matrix[i].begin(),matrix[i].end(),target);
        if(x==true)
        {
            return true;
        }
    }
        return false;
    }
};