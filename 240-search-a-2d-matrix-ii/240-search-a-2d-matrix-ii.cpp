class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
    int i;
    bool x=false;
    for(i=0;i<matrix.size();i++)
    {
        
        x=binary_search(matrix[i].begin(),matrix[i].end(),target);
        if(x==true)
        {
            return true;
        }
    }
        return false;
    }
};