class Solution {
public:
    bool judgeSquareSum(long long int c) 
    {
        long long int l=0,r=sqrt(c);
        while(l<=r)
        {
            long long int x=l*l+r*r;
            if(x==c)
            {
                return true;
            }
            if(x<c)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return false;
    }
};