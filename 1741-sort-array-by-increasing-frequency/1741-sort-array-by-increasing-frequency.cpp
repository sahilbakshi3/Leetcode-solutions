class Solution {
public:
    
    using P = pair<int, int>;

    struct lambda{
        bool operator()(const P &p1, const P &p2){
            if(p1.second == p2.second){
                return p1.first < p2.first;
            }
            else{
                return p1.second > p2.second;
            }
        }
    };
    
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;

        priority_queue<P, vector<P>, lambda> pq;

        for(auto &it: nums){
            mp[it]++;
        }

        for(auto &it: mp){
            pq.push({it.first, it.second});
        }

        vector<int> ans;

        while(!pq.empty()){
            auto [val, freq] = pq.top();
            pq.pop();

            for(int i = 0; i<freq; i++){
                ans.push_back(val);
            }
            
        }
        return ans;
    }
};