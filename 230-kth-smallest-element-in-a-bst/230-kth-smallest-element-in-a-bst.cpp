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
     priority_queue<int> maxq;
    int kthSmallest(TreeNode* root, int k) {
       
        if(root==NULL){
            return 0;
        }
        kthSmallest(root->left,k);
        maxq.push(root->val);
        if(maxq.size()>k){
            maxq.pop();
        }
        kthSmallest(root->right,k);
        return maxq.top();
        
    }
};