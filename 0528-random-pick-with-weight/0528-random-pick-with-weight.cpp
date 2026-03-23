class Solution {
public:

    vector<int> prefix;
    int total;

    Solution(vector<int>& w) {
        int n = w.size();
        prefix.push_back(w[0]);
        for(int i = 1; i< n; i++){
            prefix.push_back(prefix[i-1] + w[i]);
        }
        total = prefix[n-1];
    }
    
    int pickIndex() {
        int random = rand() % total + 1;

        int low = 0, high = prefix.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(prefix[mid] < random){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */