class Solution {
public:

    bool canAttendMeetings(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        for (int i = 1; i < intervals.size(); i++) {

            int prevEnd = intervals[i - 1][1];
            int currStart = intervals[i][0];
          
            if (currStart < prevEnd) {
                return false;
            }
        }
        return true;
    }
};
