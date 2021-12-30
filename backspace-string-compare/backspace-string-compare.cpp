class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string a="",b="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' and a.size()==0)
            {
                continue;}
            if(s[i]=='#' and a.size()>0)
            {
                a.pop_back();
                continue;
            }
            a+=s[i];
        }
         for(int i=0;i<t.size();i++)
        {
             if(t[i]=='#' and b.size()==0)
            {
                continue;}
            if(t[i]=='#' and b.size()>0)
            {
                b.pop_back();
                continue;
            }
            b+=t[i];
        }
        if(a==b)
        {
            return true;
        }
        return false;
    }
};