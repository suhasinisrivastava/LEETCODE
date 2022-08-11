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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        map<int,int> imap;
        vector<int> inorder;
        inorder=preorder;
        sort(inorder.begin(),inorder.end());
        for(int i=0;i<inorder.size();i++){
            imap[inorder[i]]=i;
        }
        TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,imap);
        return root;
    }
    TreeNode* buildTree(vector<int> &preorder,int prestart, int preend, vector<int>&inorder, int instart, int inend, map<int,int>&imap){
        if(prestart>preend || instart>inend){
            return 0;
        }
        TreeNode* root=new TreeNode(preorder[prestart]);
        int inroot=imap[root->val];
        int numsleft=inroot-instart;
        
        root->left=buildTree(preorder,prestart+1,prestart+numsleft,inorder,instart,inroot-1,imap);
        root->right=buildTree(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,imap);
        
        return root;
        
    }
};