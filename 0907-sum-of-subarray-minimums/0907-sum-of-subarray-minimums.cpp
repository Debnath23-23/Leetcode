 class Solution {
public:

    vector<int> NSL(vector<int>& arr, int n) {
        vector<int> result(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return result;
    }

    vector<int> NSR(vector<int>& arr, int n) {
        vector<int> result(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> NSL_result = NSL(arr, n);
        vector<int> NSR_result = NSR(arr, n);

        long long sum = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            long long ls = i - NSL_result[i];
            long long rs = NSR_result[i] - i;
            long long totalWays = ls * rs;

            long long totalSum = arr[i] * totalWays;
            sum = (sum + totalSum) % mod;
        }
        return sum;
    }
};
