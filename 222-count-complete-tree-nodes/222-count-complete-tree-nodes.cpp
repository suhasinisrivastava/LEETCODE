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
    int left(TreeNode* root){
        int h1=0;
        while(root){
            h1++;
            root=root->left;
            
        }
        return h1;
    }
    int right(TreeNode* root){
        int h1=0;
        while(root){
            h1++;
            root=root->right;
            
        }
        return h1;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
            
        }
        int lh=left(root);
        int rh=right(root);
        
        if(lh==rh){
            return pow(2,lh)-1;
        }
        return 1+ countNodes(root->left)+countNodes(root->right);
    }
};