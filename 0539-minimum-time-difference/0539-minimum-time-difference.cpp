class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();

        vector<int> temp;
        int ans = INT_MAX;

        for(auto &it: timePoints){
            int hours = stoi(it.substr(0, 2));
            int minutes = stoi(it.substr(3, 2));

            temp.push_back(hours * 60 + minutes);
        }

        sort(temp.begin(), temp.end());

        for(int i = 1; i < temp.size(); i++){
            ans = min(ans, temp[i] - temp[i - 1]);
        }

        ans = min(ans, 1440 - temp.back() + temp.front());

        return ans;


    }
};