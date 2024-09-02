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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int prevVal=0;
        int currVal=0;
        int nextVal=0;

        int minDist=INT_MAX;
        int firstCriticalPos=0;
        int prevCritocalPos=0;
        int i=0;

        vector<int>result={-1,-1};
        while(head!=NULL){
            prevVal=currVal;
            currVal=nextVal;
            nextVal=head-> val;

            if((prevVal!=0 && currVal!=0 && nextVal!=0) && ((prevVal>currVal && currVal<nextVal) ||
            (prevVal<currVal && currVal>nextVal)))
            {
              if( firstCriticalPos==0){
                firstCriticalPos=i;
              }else{
                minDist=min(minDist, i-prevCritocalPos);
                result= {minDist, i- firstCriticalPos};
              }
           prevCritocalPos=i;

            }
            i++;
            head=head->next;
        }
        return result;
    }
};