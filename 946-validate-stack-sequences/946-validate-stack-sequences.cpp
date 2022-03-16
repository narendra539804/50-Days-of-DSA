class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> s;
        int j=0;
        for(int i=0;i<popped.size();i++)
        {
             int x=popped[i],y=0;
            if(s.size()>0){
              y=s.top();
             if(x==y)
             {
                 s.pop();
                 continue;
             }
            }
            while(true)
            {
                if(j>=pushed.size())
                {
                    break;
                }
                if(x==pushed[j])
                {
                    s.push(pushed[j]);
                    j++;
                    break;
                }
                s.push(pushed[j]);
                j++;
            }
            y=s.top();
            if(x!=y)
            {
                return false;
            }
            s.pop();
        }
        return true;
        
    }
};