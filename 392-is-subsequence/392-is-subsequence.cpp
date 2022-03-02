class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i=0,j=0;
        for(i=0;i<t.size();i++)
        {
            if(j!=s.size() and t[i]==s[j])
            {
                j++;
            }
        }
        if(j==s.size())
        {
            return true;
        }
        return 0;
    }
};