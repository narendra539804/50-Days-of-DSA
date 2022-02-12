class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList)
    {
        set<string>s;
        for(int i=0;i<wordList.size();i++){
            s.insert(wordList[i]);
        }
        if(s.find(endWord)==s.end())
        {
            return 0;
        }
        int ans=0;
        queue<string>q;
        q.push(beginWord);
        while(!q.empty())
        {
            ans++;
            int qsize=q.size();
            while(qsize--)
            {
            string res=q.front();
            cout<<res<<" ";
            string store=res;
            q.pop();
            for(int i=0;i<res.size();i++)
            {
                res=store;
                for(int j=0;j<26;j++)
                {
                    res[i]=j+'a';
                    
                    if(s.find(res)!=s.end())
                    {
                        //cout<<res<<"  ";
                        q.push(res);
                        s.erase(res);
                        if(res==endWord)
                        {
                            return ans+1;
                        }
                    }
                }
            }
            }
        }
        return 0;
        
    }
};