class MovingAverage {
public:

    vector<int> data;

    int size;
    int count;

    long long sum;

    MovingAverage(int size) {

        this->size = size;

        data.resize(size, 0);

        count = 0;
        sum = 0;
    }

    double next(int val) {

        int index = count % size;

        sum -= data[index];

        data[index] = val;

        sum += val;

        count++;

        return (double)sum / min(count, size);
    }
};
