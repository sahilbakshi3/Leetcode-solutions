class Solution {
public:
    int maxDifference(string s) {
        vector<int> frq(26, 0);

        int maxi_odd=INT_MIN, mini_even=INT_MAX;

        for(auto& ch:s){
            int conv = ch - 'a';
            frq[conv]++;
        }

        for(int i=0;i<26;i++){
            if(frq[i]==0){continue;}

            if(frq[i]&1){
                maxi_odd = max(maxi_odd, frq[i]);
            }
            else{
                mini_even = min(mini_even, frq[i]);
            }
        }

        return maxi_odd-mini_even;
    }
};