class Solution {
    public:
    string repeatLimitedString(string s, int repeatLimit) {

        string ans = "";
        priority_queue<pair<char,int>> pq;
        unordered_map<char,int> freq;
        for(auto it:s){
            freq[it]++;
        }
        for(auto it:freq){
            pq.push({it.first,it.second});
        }
        while(!pq.empty()){
            char ch1 = pq.top().first;
            int freq1 = pq.top().second;
            pq.pop();

            if(ans.size()==0 || ans.back()!=ch1){
                int times = min(repeatLimit,freq1);
                
                for(int i=0;i<times;i++){
                    ans += ch1;
                }
                freq1-=times;
                if(freq1){
                    pq.push({ch1,freq1});
                }
            }
            else{
                if(pq.size()==0) break;
                char ch2 = pq.top().first;
                int freq2 = pq.top().second;
                pq.pop();
                ans += ch2;
                freq2--;
                if(freq2){
                    pq.push({ch2,freq2});
                }
                pq.push({ch1,freq1});
             }
        }
        return ans;
    }
};