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
        int temp=max(max(ls,rs)+root->val,root->val);
        int ans=max(temp,ls+rs+root->val);
        maxi=max(maxi,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int maxi=INT_MIN;
        int ans=mh(root,maxi);
        
        return maxi;
    }
};