class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            int j=0;
            int k=0;
            for(j=0;j<pref.size();j++)
            {
                if(pref[j]!=s[k])
                {
                    break;
                }
                k++;
            }
            if(j==pref.size())
            {
                ans++;
            }
        }
        return ans;
    }
};