class Solution {
public:
    int tribonacci(int n) 
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 1;
        }
        vector<int> res;
        res.push_back(0);
        res.push_back(1);
        res.push_back(1);
        for(int i=3;i<=n;i++)
        {
            int x=res[i-3]+res[i-2]+res[i-1];
            res.push_back(x);
        }
        return res[n];
    }
};