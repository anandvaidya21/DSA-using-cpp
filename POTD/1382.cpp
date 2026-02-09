class Solution {
public:
    vector<int> inorderVals;

    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        inorderVals.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* buildBalancedBST(int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(inorderVals[mid]);

        root->left = buildBalancedBST(left, mid - 1);
        root->right = buildBalancedBST(mid + 1, right);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);  // Step 1
        return buildBalancedBST(0, inorderVals.size() - 1);  // Step 2
    }
};
