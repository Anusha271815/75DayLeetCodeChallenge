class Solution {
public:
    bool rootPathSum(TreeNode* root, int targetSum, int sum){
        if(root == nullptr)
            return false;
        if(root -> left == nullptr && root -> right == nullptr){
            sum = sum + root -> val;
            if(sum == targetSum)
                return true;   
        }
        return rootPathSum(root -> left, targetSum, sum + root -> val) || rootPathSum(root -> right, targetSum, sum + root -> val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return rootPathSum(root, targetSum, sum);
    }
};