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
void recur(TreeNode* root, int k){
    if(root->left!=NULL){
        recur(root->left,k);
    }
    count++;
    if(count==k){
        out=root->val;
        return;
    }
     if(root->right!=NULL){
        recur(root->right,k);
    }
}
int out=0;
int count=0;
    int kthSmallest(TreeNode* root, int k) {
         recur(root, k);
         return out;
    }
};