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
    ListNode* removeElements(ListNode* head, int val) {
       
        ListNode *curr=head;
        if(head==NULL){
            return head;
        }
        
        while(curr!=NULL){
            if(curr->val==val){
            ListNode *temp=curr;
                curr=curr->next;
                head=curr;
            delete (temp);
        }
            else if(curr->next!=NULL && curr->next->val==val){
                 ListNode *temp=curr->next;
                
                curr->next=curr->next->next;
                delete (temp);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};