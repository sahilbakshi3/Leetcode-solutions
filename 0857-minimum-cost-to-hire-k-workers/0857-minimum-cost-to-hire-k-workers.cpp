class Solution
{
    public:
        double mincostToHireWorkers(vector<int> &quality, vector<int> &wage, int k)
        {
           	// int n = quality.size();

           	// double res = DBL_MAX;

           	// for(int manager = 0; manager < n; manager++){
           	//     vector < double>group;

           	//     double managerRatio = (double)wage[manager] / quality[manager];

           	//     for(int worker = 0; worker < n; worker++){
           	//         double worker_wage = managerRatio *quality[worker];

           	//         if(worker_wage >= wage[worker]){
           	//             group.push_back(worker_wage);
           	//         }

           	//     }

           	//     if(group.size() < k){
           	//         continue;
           	//     }

           	//     priority_queue<double, vector < double>> pq;
           	//     double sum = 0;

           	//     for(auto &it: group){
           	//         sum += it;
           	//         pq.push(it);

           	//         if(pq.size() > k){
           	//             sum -= pq.top();
           	//             pq.pop();
           	//         }

           	//     }

           	//     res = min(res, sum);

           	// }
           	// return res;

            int n = quality.size();

            vector<pair<double, int>> workers;

            for (int i = 0; i < n; i++)
            {
                double ratio = (double) wage[i] / quality[i];
                workers.push_back({ ratio,
                    quality[i] });
            }

            sort(workers.begin(), workers.end());

            priority_queue<int> pq;
            double sum = 0;
            double res = DBL_MAX;

            for (auto &it: workers)
            {
                double ratio = it.first;
                int q = it.second;

                pq.push(q);
                sum += q;

                if (pq.size() > k)
                {
                    sum -= pq.top();
                    pq.pop();
                }

                if (pq.size() == k)
                {
                    res = min(res, sum *ratio);
                }
            }

            return res;
        }
};