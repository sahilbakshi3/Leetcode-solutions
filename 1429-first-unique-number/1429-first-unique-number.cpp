class FirstUnique {
public:

    queue<int> q;

    unordered_map<int, int> freq;

    FirstUnique(vector<int>& nums) {

        for (int num : nums) {

            add(num);
        }
    }

    int showFirstUnique() {

        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

        if (q.empty()) {
            return -1;
        }

        return q.front();
    }

    void add(int value) {

        freq[value]++;

        q.push(value);
    }
};
