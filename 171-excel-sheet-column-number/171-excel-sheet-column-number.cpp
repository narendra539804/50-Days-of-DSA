class Solution {
public:
    int titleToNumber(string columnTitle)
    {
       long long int res=0;
        long long int mul=1;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            int ans=columnTitle[i]-64;
            res+=mul*ans;
            mul*=26;
        }
        return res;
    }
};
