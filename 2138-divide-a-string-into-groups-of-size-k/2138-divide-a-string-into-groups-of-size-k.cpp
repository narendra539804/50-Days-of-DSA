class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        vector<string>res;
        for(int i=0;i<s.size();)
        {
            string str="";
            int j=k;
            while(j-- and i<s.size())
            {
                str+=s[i];
                i++;
            }
            if(str.size()==k)
            {
                res.push_back(str);
            }
            else{
                int y=str.size();
                 while(y!=k)
                 {
                    str.push_back(fill);
                     y++;
                 }
                 res.push_back(str);
            }
        }
        return res;
    }
};