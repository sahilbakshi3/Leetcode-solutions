class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();

        int res = INT_MAX;

        for(int i = 0; i< n; i++){
            if(words[i] == target){
                int straight_dist = abs(i - startIndex);
                int circular_dist = n - straight_dist;

                res = min({res, straight_dist, circular_dist});

            }
        }

        return (res == INT_MAX) ? -1 : res;

    }
};