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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        bool b=false;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1==NULL && list2==NULL){
            return nullptr;
        }
        ListNode *x1=list1;
        ListNode *x2=list2;
        ListNode *x3=NULL;
        ListNode *ans=NULL;
        if(x1->val>=x2->val){
            b=true;
            x3=x2;
            ans=x3;
            x2=x2->next;
        }
        else{
            x3=x1;
            ans=x3;
            x1=x1->next;
        }
    
        while(x1!=NULL && x2!=NULL){

        if(x1->val>=x2->val){
            x3->next=x2;
            x2=x2->next;
            x3=x3->next;
                
            
        }
        else{
            x3->next=x1;
            x1=x1->next;
            x3=x3->next;
            
        }
        }
        if(x1!=NULL){
            x3->next=x1;
        }
        else{
            x3->next=x2;
        }
       
        return ans;
        
        
        
        
        
        
    }
};