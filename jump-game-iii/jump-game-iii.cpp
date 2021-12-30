class Solution {
public:
    unordered_set<int>visited;
    bool canReach(vector<int>& arr, int start)
    {
        if(visited.count(start)==1 or start<0 or start>=arr.size())
        {
            return false;
        }
        if(arr[start]==0)
        {
            return true;
        }
        visited.insert(start);
        return canReach(arr,start+arr[start]) or canReach(arr,start-arr[start]);
    }
};