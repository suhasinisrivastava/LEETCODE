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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            return nullptr;
            
        }
        
        int c=1;
            ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        if(c-n==0){
            head=head->next;
            return head;
        }
        int v=0;
        ListNode *d=head;
        while(v!=c-n-1){
            if(d->next!=NULL){
            d=d->next;
            v++;}
        }
        if(n!=1){
            d->next=d->next->next;
        }
        else{
            d->next=NULL;
        }
        return head;
    }
};