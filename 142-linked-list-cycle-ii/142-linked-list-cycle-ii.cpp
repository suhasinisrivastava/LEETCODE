/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        ListNode *x=head;
        bool p=false;
        while(s!=NULL && f!=NULL){
            if(s!=NULL){
            s=s->next;}
            if(f!=NULL && f->next!=NULL){
            f=f->next->next;}
            
            if(s==f){
                p=true;
                break;
            }
        }
        if(x==s){
            return s;
        }
        while(x!=NULL && s!=NULL){
            if(s!=NULL){
            s=s->next;}
            x=x->next;
            if(x==s){
                break;
            }
        }
        
        if(p==false){
            return nullptr;
        }
        return s;
    }
};