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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        while(!q.empty()){
            long long minm=q.front().second;
            long long size=q.size();
            
            int first,last;
            for(long long i=0;i<size;i++){
                long long c=q.front().second-minm;
                TreeNode* node=q.front().first;
                q.pop();
                
                if(i==0){
                    first=c;
                }
                if(i==size-1){
                    last=c;
                }
                if(node->left){
                    q.push({node->left,2*c+1});
                }
                if(node->right){
                    q.push({node->right,2*c+2});
                }
                
            }
            ans=max(ans,last-first+1);
            
            
        }
        return ans;
    }
};