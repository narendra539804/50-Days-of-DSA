class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            char p=s[i];
            if(p=='(' or p=='{' or p=='[')
            {
                st.push(p);
            }
             if(p==')' or p=='}' or p==']')
            {
                if(st.size()==0)
                {
                    return false;
                }
                char l=st.top();
                if(p==')' and l=='(')
                {
                    st.pop();
                }
                 else if(p=='}' and l=='{')
                {
                    st.pop();
                }
                else if(p==']' and l=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
         if(st.size()==0)
                {
                    return true;
                }
        return false;
    }
};