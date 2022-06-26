/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool b=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        
        if(p==NULL && q!=NULL){
            b= false;
        }
        if(p!=NULL && q==NULL){
            b= false;
        }
        if(p!=NULL && q!=NULL){
        if(p->val==q->val){
            isSameTree(p->left,q->left);
            isSameTree(p->right,q->right);
        }
        else{
            cout<<1;
            b= false;
        }
        }
        
        return b;
    }
};