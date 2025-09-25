class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();

        sort(tokens.begin(), tokens.end());
        int i = 0, j = n-1, score = 0, maxScore = 0;

        while(i <= j){
            if(power >= tokens[i]){
                power -= tokens[i];
                score++;
                i++;
            }
            else if(score >= 1){
                power += tokens[j];
                score--;
                j--;
            }
            else{
                break;
            }

            maxScore = max(maxScore, score);

        }
        return maxScore;
    }
};