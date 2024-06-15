class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();

        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; ++i) {
            vec[i] = {capital[i], profits[i]};
        }

        sort(begin(vec), end(vec));

        priority_queue<int> pq;

        int i = 0;
        while (k > 0) {
            // Push all projects that we can currently invest in based on available capital
            while (i < n && vec[i].first <= w) {
                pq.push(vec[i].second);
                ++i;
            }

            // If there are projects we can invest in, pick the one with maximum profit
            if (!pq.empty()) {
                w += pq.top();
                pq.pop();
                --k;
            } else {
                break; // No more projects we can invest in
            }
        }

        return w;
    }
};







