class Solution {
public:
    int countEven(int num)
    {
        int ans=0;
        for(int i=2;i<=num;i++)
        {
            if(i<=9)
            {
                if(i%2==0)
                {
                    ans++;
                }
                continue;
            }
            int x=0;
            string s=to_string(i);
            for(int j=0;j<s.size();j++)
            {
                x+=s[j]-48;
            }
            if(x%2==0)
                {
                    ans++;
                }
            
        }
        return ans;
    }
};