class Solution {
public:
   int minSteps(string s, string t) {
unordered_map<char, int> mp;
int n=s.size();
for(int i=0;i<n;i++)
mp[s[i]]++;
n=t.size();
for(int i=0;i<n;i++)
mp[t[i]]--;
int cnt=0;
for(auto i:mp)
cnt+=abs(i.second);
return cnt;
   }
};