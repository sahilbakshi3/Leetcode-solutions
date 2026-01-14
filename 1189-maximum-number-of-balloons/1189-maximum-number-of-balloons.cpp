class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);

        for(auto &it: text){
            if(it >= 'a' && it <= 'z'){
                freq[it - 'a']++;
            }
        }

        int cnt_b = freq['b' - 'a'];
        int cnt_a = freq['a' - 'a'];
        int cnt_l = freq['l' - 'a']/2;
        int cnt_o = freq['o' - 'a']/2;
        int cnt_n = freq['n' - 'a'];

        return min({cnt_b, cnt_a, cnt_l, cnt_o, cnt_n});

    }
};