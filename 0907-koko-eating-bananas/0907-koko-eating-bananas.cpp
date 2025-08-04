class Solution {
public:
    
    int findMax(vector<int> &piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i = 0; i< n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long int totalHours(vector<int> &piles, int h){
        long long int tot = 0;

        for(int i = 0; i< piles.size(); i++){
            tot += ceil(double(piles[i])/double(h));
        }
        return tot;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long int low = 1, high = findMax(piles);

        while(low <= high){
            long long int mid = low + (high - low)/2;

            long long int tot = totalHours(piles, mid);
            if(tot <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};