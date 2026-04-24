class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        
        int l = 0, r = 0, blank = 0;

        for(auto &it: moves) {
            if(it == 'L') l++;
            else if(it == 'R') r++;
            else blank++;
        }

        return abs(l - r) + blank;

    }
};