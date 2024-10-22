/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
public:
    long kthLargestLevelSum(TreeNode* root, int k) {
        // max heap
        priority_queue<long> pq;

        queue<TreeNode*> bfsQueue;
        bfsQueue.push(root);
        while (!bfsQueue.empty()) {
            // level order traversal
            long size = bfsQueue.size();
            long sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* poppedNode = bfsQueue.front();
                bfsQueue.pop();
                sum += poppedNode->val;
                if (poppedNode->left != nullptr) {
                    // add left child
                    bfsQueue.push(poppedNode->left);
                }
                if (poppedNode->right != nullptr) {
                    // add right child
                    bfsQueue.push(poppedNode->right);
                }
            }
            pq.push(sum);
        }
        if (pq.size() < k) return -1;
        for (int i = 0; i < k - 1; i++) pq.pop();
        return pq.top();
    }
};