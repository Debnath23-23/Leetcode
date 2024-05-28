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
    ListNode* reverseList(ListNode* head) {
        //base case
        if(head==NULL || head->next==NULL){
            return head;
        }
        //recursive call for the future head
        ListNode* last=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return last;
        
    }
};