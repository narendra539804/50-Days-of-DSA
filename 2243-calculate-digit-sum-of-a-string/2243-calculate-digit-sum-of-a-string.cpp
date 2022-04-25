class Solution {
public:
    string digitSum(string s, int k)
    {
        while(s.length()>k)
        {
            string str="";
            int i=0;
            while(i<s.size())
            {
                int j=k;
                int sum=0;
                while(j-- and i<s.size())
                {
                    sum+=s[i]-'0';
                    i++;
                }
                string ans=to_string(sum);
                str+=ans;
            }
            s=str;
        }
        return s;
    }
};