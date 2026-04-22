class Solution {
public:
    bool validate(TreeNode* t, TreeNode*& pre) {
        if (t == nullptr) return true;
        if (!validate(t->left, pre)) 
            return false;
        if (pre != nullptr && t->val <= pre->val) 
            return false;
        pre = t;
        
        return validate(t->right, pre);
    }
    
    bool isValidBST(TreeNode* root) {
        TreeNode* pre = nullptr;
        return validate(root, pre);
    }
};