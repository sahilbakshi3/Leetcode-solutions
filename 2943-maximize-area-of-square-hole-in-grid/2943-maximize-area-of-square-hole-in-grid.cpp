class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        int max_consecutive_v_bars = 1;
        int max_consecutive_h_bars = 1;


        int curr_consecutive_h_bars = 1;

        for(int i = 1; i< hBars.size(); i++){
            if(hBars[i] - hBars[i-1] == 1){
                curr_consecutive_h_bars++;
            }
            else{
                curr_consecutive_h_bars = 1;
            }

            max_consecutive_h_bars = max(max_consecutive_h_bars, curr_consecutive_h_bars);
        }

        int curr_consecutive_v_bars = 1;

        for(int i = 1; i< vBars.size(); i++){
            if(vBars[i] - vBars[i-1] == 1){
                curr_consecutive_v_bars++;
            }
            else{
                curr_consecutive_v_bars = 1;
            }

            max_consecutive_v_bars = max(max_consecutive_v_bars, curr_consecutive_v_bars);
        }

        int side = min(max_consecutive_v_bars, max_consecutive_h_bars) + 1;

        return side * side;

    }
};