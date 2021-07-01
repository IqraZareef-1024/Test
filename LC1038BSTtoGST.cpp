class Solution {
    void t(TreeNode* &root, int &sum){
        if(root==NULL){
            return;
        }
        t(root->right,sum);
        sum+=root->val;
        root->val=sum;
        t(root->left,sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        int sum=0;
        t(root,sum);
        return root;
    }
};