class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        int n = weight.size();
        sort(weight.begin(), weight.end());

        int sum = 0;
        int count = 0;

        for (int w : weight) {
            if (sum + w > 5000)
                break;

            sum += w;
            count++;
        }

        return count;
    }
};
