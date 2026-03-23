class Solution
{
    public:

       	// int findMax(vector<int> &piles){
       	//     int n = piles.size();
       	//     int maxi = INT_MIN;
       	//     for(int i = 0; i< n; i++){
       	//         maxi = max(maxi, piles[i]);
       	//     }
       	//     return maxi;
       	// }

       	// long long int totalHours(vector<int> &piles, int h){
       	//     long long int tot = 0;

       	//     for(int i = 0; i< piles.size(); i++){
       	//         tot += ceil(double(piles[i])/double(h));
       	//     }
       	//     return tot;
       	// }

        bool isOk(vector<int> &piles, long long mid, int h)
        {
            long long hours = 0;
            for (int p: piles)
            {
                hours += (p + mid - 1) / mid;	// ceil(p/mid)
                if (hours > h) return false;	// early exit
            }
            return hours <= h;
        }

    int minEatingSpeed(vector<int> &piles, int h)
    {

       	// long long int low = 1, high = findMax(piles);

       	// while(low <= high){
       	//     long long int mid = low + (high - low)/2;

       	//     long long int tot = totalHours(piles, mid);
       	//     if(tot <= h){
       	//         high = mid - 1;
       	//     }
       	//     else{
       	//         low = mid + 1;
       	//     }
       	// }
       	// return low;

        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int ans = hi;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (isOk(piles, mid, h))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        return ans;
    }
};