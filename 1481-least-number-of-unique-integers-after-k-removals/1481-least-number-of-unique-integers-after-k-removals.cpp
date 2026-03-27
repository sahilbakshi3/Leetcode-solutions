class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();

        unordered_map<int, int> mp;

        for(auto &it: arr){
            mp[it]++;
        }

        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto &it: mp){
            pq.push(it.second);
        }

        while(k > 0 && !pq.empty()){
            int top = pq.top();
            pq.pop();

            if(k >= top){
                k -= top;
            }
            else{
                return pq.size() + 1;
            }
        }
        return pq.size();
    }
};