class Solution {
public:
	vector<int> findRightInterval(vector<vector<int>>& intervals) {
		vector<int> result;
		map<int, int> m;
		for(int i = 0; i < intervals.size(); i++)
			m[intervals[i][0]] = i;
		for(int i = 0; i < intervals.size(); i++)
		{
			auto it = m.lower_bound(intervals[i][1]);
			if(it != m.end())
				result.push_back(it -> second);
			else
				result.push_back(-1);
		}
		return result;
	}
};