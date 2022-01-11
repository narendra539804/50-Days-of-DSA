class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
    int i;
    for(i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            if(matrix[i][j]>target)
            {
                break;
            }
        }        
        
    }
        return false;
    }
};