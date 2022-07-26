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
    vector<int> inorder(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return v;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        return v;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        vector<int> v;
        v=inorder(root, v);
        vector<int> s=v;
        sort(s.begin(),s.end());
        if(s!=v){
            return false;
        }
        for(int i=1;i<=v.size()-1;i++){
            if(s[i]==s[i-1]){
                return false;
            }
        }
        return true;
        
        
    }
};