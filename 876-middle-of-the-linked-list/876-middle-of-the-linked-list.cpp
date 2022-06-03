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
    ListNode* middleNode(ListNode* head) {
        int c=1;
            ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
        }
         int v=0;
        if(c%2!=0){
           while(v!=c/2){
               head=head->next;
               v++;
           }
            return head;
        
        }
        else{
            while(v!=c/2){
               head=head->next;
               v++;
           }
            return head;
        }
        return head;
    }
};