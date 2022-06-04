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
    bool isPalindrome(ListNode* head) {
        ListNode *d=new ListNode();
        ListNode *temp=d;
        ListNode *dummy=NULL;
        ListNode *t=d;
        ListNode *temp1=head;
        while(temp1!=NULL){
            ListNode *node=new ListNode(temp1->val);
            temp->next=node;
            temp=temp->next;
            temp1=temp1->next;
        }
        t=t->next;
        while(head!=NULL){
            ListNode *next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        ListNode *x1=t;
        ListNode *x2=dummy;
        while(x1!=NULL && x2!=NULL){
            if(x1->val==x2->val){
                x1=x1->next;
                x2=x2->next;
                
            }
            else {
                return false;
            }
        }
        return true;
        
    }
};