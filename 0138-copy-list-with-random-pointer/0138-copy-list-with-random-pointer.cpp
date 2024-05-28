/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //base case
        if(head==NULL){
            return NULL;
        }
        //1. insert the new node in between the original linkedlist
        Node* curr=head;
        while(curr!=NULL){
            Node* currNext= curr->next;  //B
            curr->next=new Node(curr->val);  //A->B
            curr->next->next=currNext; //A->x->B
            curr=currNext ;       //curr=B
        } 

        //2. Deepcopy of random pointers
        curr=head;
        while(curr!=NULL  && curr->next!=NULL){
            if(curr->random==NULL){
                curr->next->random=NULL;
            }else{
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;

        }
        //3.separate the linkedlists
        Node* newHead=head->next;
        Node* newCurr= newHead;
        curr=head;
        while(curr!=NULL && newCurr!=NULL){
            curr->next=curr->next==NULL?NULL:curr->next->next;
            newCurr->next=newCurr->next==NULL?NULL:newCurr->next->next;
            curr=curr->next;
            newCurr=newCurr->next;
        }
        return newHead;
    }
};