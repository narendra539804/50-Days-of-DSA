class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        int p = 0;
        int prev = 0;
        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            int li = n-1;
            while(li>i and s[li]!=ch)li--;
            if(s[li] == ch){
                p = max(p,li);
                if(i == p){
                    ans.push_back(p-prev+1);
                    prev = p+1;
                }
            }
        }
        return ans;
    }
};