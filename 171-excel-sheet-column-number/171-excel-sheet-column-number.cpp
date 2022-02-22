class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        long long int res=0;
        long long int mul=1;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            res+=(columnTitle[i]-64)*mul;
            mul=mul*26;
        }
        return res;
    }
};