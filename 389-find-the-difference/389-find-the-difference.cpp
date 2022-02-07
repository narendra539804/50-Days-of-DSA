class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++)
        {
            if(i>=s.size())
            {
                return t[i];
            }
         if(s[i]!=t[i])
         {
             return t[i];
         }
        }
        return 'c';
    }
};