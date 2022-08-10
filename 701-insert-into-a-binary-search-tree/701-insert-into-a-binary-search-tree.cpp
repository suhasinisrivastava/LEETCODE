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
    int ans=0;
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL && ans==0){
            TreeNode* node=new TreeNode(val);
            return node;
        }
        if(root==NULL){
            return 0;
            
        }
        
        
        
         if(val>root->val && root->right!=NULL){
                ans=1;
                insertIntoBST(root->right,val);
          }
        else if(val>root->val && root->right==NULL){
            ans=1;
                TreeNode* node=new TreeNode(val);
                root->right=node;
                return root;
          }
         else if(val<root->val && root->left!=NULL){
             ans=1;
             insertIntoBST(root->left,val);
         
          }
        else if(val<root->val && root->left==NULL){
            ans=1;
            TreeNode* node=new TreeNode(val);
                root->left=node;
                return root;
        }
        return root;
    }
};