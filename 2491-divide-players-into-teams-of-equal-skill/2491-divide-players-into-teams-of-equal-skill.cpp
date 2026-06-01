class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();

        sort(skill.begin(), skill.end());

        int left = 0, right = n-1;

        int target = skill[left] + skill[right];
        long long chemistry = 0;

        while(left < right){
            if(skill[left] + skill[right] != target){
                return -1;
            }

            chemistry += 1LL * skill[left] * skill[right];
            left++;
            right--;
        }

        return chemistry;

    }
};