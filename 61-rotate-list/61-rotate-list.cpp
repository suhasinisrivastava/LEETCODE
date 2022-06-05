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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *t=head;
        ListNode *s=head;
        int c=1;
        int p=0;
        if(head==NULL){
            return nullptr;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
            
            
        }
        if(k==c){
            return head;
        }
        if(c==2 && k%c==1){
            temp->next=head;
            t->next=NULL;
            return temp;
        }
        if(k!=0){
            temp->next=head;
            while(p!=c-k%c){
                t=t->next;
                 p++;
                if(p==c-k%c){
                    s->next=NULL;
                    return t;
                }
                s=s->next;
               
            }
        
        }
        return t;
    }
};