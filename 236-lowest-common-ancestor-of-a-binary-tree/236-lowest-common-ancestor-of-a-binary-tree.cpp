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
    bool path(TreeNode* root, vector<int> &arr,int x){
    if(!root){
        return false;
    }
    arr.push_back(root->val);
    if(root->val==x){
        return true;
    }
    if(path(root->left,arr,x) || path(root->right,arr,x)){
        return true;
    }
    arr.pop_back();
    return false;
}
    bool a=true;
    TreeNode* c;
    TreeNode* findNode(TreeNode* root,int node){
        if(root!=NULL){
        if(root->val==node){
            //cout<<root->val;
            a=false;
            c=root;
            return root;
        }
            else{
                cout<<1;
            }
        }
        if(root!=NULL){
            if(a==true){
        findNode(root->left,node);
            }
            
            if(a==true){
        findNode(root->right,node);
            }
        }
        return c;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> arr;
        vector<int> arr2;
        int node=INT_MIN;
        TreeNode* n;
        TreeNode* root2=root;
        path(root,arr,p->val);
        path(root,arr2,q->val);
        if(arr.size()<arr2.size()){
            for(int i=0;i<arr.size();i++){
                if(arr[i]!=arr2[i]){
                    node=arr[i-1];
                    break;
                }
            }
            if(node==INT_MIN){
                node=arr[arr.size()-1];
            }
        }
        else{
            for(int i=0;i<arr2.size();i++){
                if(arr[i]!=arr2[i]){
                    node=arr2[i-1];
                    break;
                }
            }
            if(node==INT_MIN){
                node=arr2[arr2.size()-1];
            }
        }
        /*for(int i=0;i<arr2.size();i++){
            cout<<arr2[i]<<endl;
        }*/
        //cout<<root2->val;
        n=findNode(root2,node);
        return n;
        
        
    
    }
};