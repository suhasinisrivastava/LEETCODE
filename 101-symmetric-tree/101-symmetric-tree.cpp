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
    bool check(TreeNode *n1,TreeNode *n2){
        if((n1==NULL && n2!=NULL ) || (n1!=NULL && n2==NULL)){
            b=false;
        }
        if(n1!=NULL && n2!=NULL){
        if(n1->val==n2->val){
            check(n1 ->left, n2->right);
            check(n1 ->right, n2->left);
        }
        else{
             b= false;
        }
        }
        return b;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        TreeNode *n1=root->left;
        TreeNode *n2=root->right;
        bool x=check(n1,n2);
        return x;
        
    }
};