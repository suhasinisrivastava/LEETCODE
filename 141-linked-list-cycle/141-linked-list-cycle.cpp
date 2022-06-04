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
    bool hasCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        while(s!=NULL || f!=NULL){
            s=s->next;
            if(f!=NULL && f->next!=NULL){
            f=f->next->next;}
            else{
                f=NULL;
                    break;
            }
            if(s==f){
                return true;
            }
        }
        return false;
    }
};