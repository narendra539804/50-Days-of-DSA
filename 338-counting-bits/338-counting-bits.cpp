class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> res;
        for(int i=0;i<=n;i++)
        {
            int x=i;
            string str=bitset<64>(x).to_string();
            int c=0;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='1')
                {
                    c++;
                }
            }
            res.push_back(c);
        }
  return res;       
    }
};