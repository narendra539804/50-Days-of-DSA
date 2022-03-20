class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
     int n=tops.size(),k=1,c1=0,c2=0;
        for(int i=0;i<n && k<7;i++)
        {
            if(tops[i]!=k && bottoms[i]!=k )
            {
                k++;
                i=-1;
                c1=0;
                c2=0;
            }
            else if(tops[i]!=k) c1++;
            else if(bottoms[i]!=k) c2++;
            if(i==n-1)
                return min(c1,c2);
        }
        return -1;   
    }
};