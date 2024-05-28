/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
         vector<int> nums;
         while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
         }
         stack<int> s;
         vector<int>ans(nums.size());
         for(int i=nums.size()-1; i>=0; i--){
            while(!s.empty() && s.top()<=nums[i])
            s.pop();
            ans[i]=s.empty()?0:s.top();
            s.push(nums[i]);
         }
         return ans;
    }
};