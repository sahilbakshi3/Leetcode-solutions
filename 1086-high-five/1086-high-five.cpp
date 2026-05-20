class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
      
        map<int, priority_queue<int, vector<int>, greater<int>>> mp;

        for (auto& item : items) {
            int id = item[0];
            int score = item[1];

            mp[id].push(score);

            if (mp[id].size() > 5) {
                mp[id].pop();
            }
        }

        vector<vector<int>> ans;

        for (auto& [id, pq] : mp) {
            int sum = 0;

            while (!pq.empty()) {
                sum += pq.top();
                pq.pop();
            }

            ans.push_back({id, sum / 5});
        }

        return ans;
    }
};
