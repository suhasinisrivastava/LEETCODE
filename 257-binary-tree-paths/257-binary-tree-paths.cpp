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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        TreeNode *node=root;
        if(root==NULL){
            return v;
        }
        string d="";
        d+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            v.push_back(d);
        }
        if(root->left!=NULL){
            dfs(root->left,d, v,node);
        }
        if(root->right!=NULL){
            dfs(root->right,d, v,node);
        }
        return v;
    }
    void dfs(TreeNode* root, string d, vector<string> &v , TreeNode* node){
        d+="->";
        d+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            v.push_back(d);
            return;
        }
        if(root->left!=NULL){
            dfs(root->left,d, v,node);
        }
        if(root->right!=NULL){
            dfs(root->right,d, v,node);
        }
    }
};