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
    int mh(TreeNode* root,int &maxi) {
        
        if(root==NULL){
            return 0;
        }
        int ls=mh(root->left,maxi);
        int rs=mh(root->right,maxi);
        maxi=max(maxi,ls+rs);
        return 1+max(ls,rs);
    }
   
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int maxi=0;
        int ans=mh(root,maxi);
        
        return maxi;
    }
};