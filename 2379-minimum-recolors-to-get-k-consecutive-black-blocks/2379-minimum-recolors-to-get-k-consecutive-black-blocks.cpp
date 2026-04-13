class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();

        int whites = 0;
        for(int i = 0; i< k; i++) {
            if(blocks[i] == 'W') whites++;

        }

        int minOps = whites;

        for(int i = k; i< n; i++) {
            if(blocks[i] == 'W') whites++;
            if(blocks[i - k] == 'W') whites--;

            minOps = min(minOps, whites);
        }

        return minOps;

    }
};