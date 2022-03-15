class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<pair<char,int>>st;
        if(s.size()<=0)
        {
            return s;
        }
        for(int i=0;i<s.size();)
        {
           if(st.size()==0 and s[i]==')')
           {
               s.erase(i,1);
               continue;
           }
            if(s[i]=='(')
            {
                st.push(make_pair(s[i],i));
            }
            if(s[i]==')')
            {
             st.pop();   
            }
            i++;
        }
        while(!st.empty())
        {
            pair<char,int> p;
            p=st.top();
            int x=p.second;
            s.erase(x,1);
            st.pop();
        }
        return s;
    }
};