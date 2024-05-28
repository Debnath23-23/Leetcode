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
int traverseFront(ListNode* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int L=traverseFront(head);

          
        //cornercase
        if(n==L){
            ListNode* temp=head->next;
            delete(head);
            return temp;
        }

        int travelFront=L-n;
         ListNode* temp=head;
         ListNode* prev=NULL;

       while(travelFront--){
           prev=temp;
           temp=temp->next;
       }
      prev->next=temp->next;
      delete(temp);
      return head;
    }
};