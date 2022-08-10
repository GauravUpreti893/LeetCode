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
    TreeNode* sorted(vector<int>&nums, int n, int &idx)
    {
        if (n == 0)
            return NULL;
        TreeNode* left = sorted(nums, n/2, idx);
        TreeNode* curr = new TreeNode(nums[idx++]);
        curr->left = left;
        curr->right = sorted(nums, n - n/2 - 1, idx);
        return curr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        return sorted(nums, n, idx);
    }
};