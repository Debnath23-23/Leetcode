 class Solution {
public:
    bool topologicalSortCheck(unordered_map<int, vector<int>> &adj, int n, vector<int> &indegree) {
        queue<int> que;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                count++;
                que.push(i);
            }
        }
        while (!que.empty()) {
            int u = que.front();
            que.pop();

            for (int &v : adj[u]) {
                indegree[v]--;
                if (indegree[v] == 0) {
                    count++;
                    que.push(v);
                }
            }
        }
        if (count == n)
            return true;

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numCourses, 0);
        for (auto &vec : prerequisites) {
            int a = vec[0];
            int b = vec[1];
            // b --> a
            adj[b].push_back(a);
            indegree[a]++;
        }
        // if cycle is present, not possible
        return topologicalSortCheck(adj, numCourses, indegree);
    }
};
