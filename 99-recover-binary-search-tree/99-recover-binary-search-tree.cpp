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
    TreeNode* first=NULL;
    TreeNode* sec=NULL;
    vector<int>v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){
            return v;
        }
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
        return v;
    }
    void find(int f, int s,TreeNode*root){
        if(root==NULL){
            return;
        }
        find(f,s,root->left);
        if(root->val==f){
            first=root;
        }
        if(root->val==s){
            sec=root;
        }
        find(f,s,root->right);
        if(first!=NULL && sec!=NULL){
        first->val=s;
        sec->val=f;
        }
        
    }
    void recoverTree(TreeNode* root) {
        vector<int> v,s,t;
        v=inorderTraversal(root);
        s=v;
        sort(s.begin(),s.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=s[i]){
                t.push_back(v[i]);
            }
        }
        int f=t[0];
        int se=t[1];
        find(t[0],t[1],root);
        
    }
};