class Solution {
public:
    vector<string> cellsInRange(string s) 
    {
        char a=s[0];
        int b=s[1]-48;
        char c=s[3];
        int d=s[4]-48;
        vector<string>res;
        for(int i=a;i<=c;i++)
        {
            for(int j=b;j<=d;j++)
            {
                string a;
                stringstream ss;
                ss<<char(i)<<j;
                ss>>a;
                res.push_back(a);
            }
        }
        return res;
        
    }
};