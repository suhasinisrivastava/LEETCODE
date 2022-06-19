/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        stack<TreeNode*> st;
        st.push(cloned);
        while(!st.empty()){
            cloned=st.top();
            st.pop();
            if(cloned->val==target->val){
                return cloned;
            }
            if(cloned->right!=NULL){
                st.push(cloned->right);
            }
            if(cloned->left!=NULL){
                st.push(cloned->left);
            }
        }
        return cloned;
    }
};