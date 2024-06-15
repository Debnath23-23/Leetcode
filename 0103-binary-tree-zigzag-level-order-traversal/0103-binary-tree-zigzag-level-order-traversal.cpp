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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

         vector<vector<int>> result;

         if(root==NULL)
         return result;

         queue<TreeNode*>q;
         q.push(root);

         int leftToRight=true;

         while(!q.empty()){
            int n=q.size();

          vector<int>ans (n);
            for(int i=0; i<n; i++){
                TreeNode* frontNode= q.front();
                  q.pop();
                 
                 int index=leftToRight?i:n-1-i;
                 ans [index]=frontNode->val;

                  if(frontNode->left)
                     q.push(frontNode->left);

                     
                  if(frontNode->right)
                     q.push(frontNode->right);
            }
            
            result.push_back(ans);
              leftToRight=!leftToRight;

          

         }
         return result;
        
    }
};