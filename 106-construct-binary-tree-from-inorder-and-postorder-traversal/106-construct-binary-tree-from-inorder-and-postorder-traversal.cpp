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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()){
            return NULL;
        }
        map<int,int> imap;
        for(int i=0;i<inorder.size();i++){
            imap[inorder[i]]=i;
        }
        vector<int>preorder=postorder;
        TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,imap);
        return root;
        
    }
    TreeNode* buildTree(vector<int> &preorder,int prestart, int preend, vector<int>&inorder, int instart, int inend, map<int,int>&imap){
        if(prestart>preend || instart>inend){
            return 0;
        }
        TreeNode* root=new TreeNode(preorder[preend]);
        int inroot=imap[preorder[preend]];
        int numsleft=inroot-instart;
        
        root->left=buildTree(preorder,prestart,prestart+numsleft-1,inorder,instart,inroot-1,imap);
        root->right=buildTree(preorder,prestart+numsleft,preend-1,inorder,inroot+1,inend,imap);
        
        return root;
        
    }
};