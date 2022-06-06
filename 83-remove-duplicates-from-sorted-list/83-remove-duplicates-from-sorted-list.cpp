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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *f=head;
        ListNode *p=head;
        if(head==NULL){
            return nullptr;
        }
         f=f->next;
        while(f!=NULL){
            
            cout<<f->val<<endl;
            cout<<p->val<<endl;
           
            if(f->val==p->val && f->next!=NULL){
                p->next=f->next;
                f=f->next;
                //cout<<"yes"<<endl;
                //free(temp);
            }
            else if(f->val==p->val && f->next==NULL){
                //delete p->next;
                p->next=NULL;
                f=NULL;
                //cout<<"n"<<endl;
                
            }
            else{
                
                 f=f->next;
                p=p->next;
            }
        }
        return head;
    }
};