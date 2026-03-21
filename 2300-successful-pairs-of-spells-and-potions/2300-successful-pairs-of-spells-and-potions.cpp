class Solution {
public:
    
    int solve(vector<int> &potions, long long target){
        long long low = 0, high = potions.size() - 1;
        long long ans = potions.size();

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(potions[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return ans;
    }
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = potions.size();

        vector<int> res;

        for(int i = 0; i< spells.size(); i++){
            long long need = (success + spells[i] - 1)/spells[i];

            int idx = solve(potions, need);

            res.push_back(n - idx);

        }
        return res;
    }
};