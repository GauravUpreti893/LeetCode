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
    // Since Inorder traversal of BST is sorted, and we have only two nodes swapped, so we can clearly see which nodes are swapped and we will swap them again. 
    // This method require O(n) space, but if you understand this, doing in constant space is very easy, it's almost identical.
    vector<TreeNode* > inorder;
    void traversal(TreeNode* root)
    {
        if (root == NULL)
            return;
        traversal(root->left);
        inorder.push_back(root);
        traversal(root->right);
        return;
    }
    void recoverTree(TreeNode* root) {
        traversal(root);
        // Now we get a sorted array except for two elements which we have to find.
        int n = inorder.size();
        bool check = false; // To check whether we found first element or not.
        //  What we are gonna do is find out which elements don't satisfy the increasing order and after finding all of them, we will swap values of first and the last of them. Why?? Let's see all possible cases.
        // Case1: Let's say inorder = [1,4,3,2,5];
        //        So, what we have to replace are 4 and 2 and we can clearly see 4 is the first no which doesn't saisfy the condition and 2 is the last one. Total there are [4,3,2];
        
        // Case2: Let's say inorder = [1,3,2,4,5];
        // Elements not satisfying condition are [3,2]; So they are the elements that we swap.
        
        // Case3: Let's say inorder = [4,2,3,1,5];
        // Elements not satisfying condition are [4,2,3,1]; So 4 and 1 are our desired elements.
        
        // Thus we have to swap only first and last elements.
        
        TreeNode *first, *last;
        for (int i = 0; i < n; i++)
        {
            if ((i > 0 && (inorder[i]->val < inorder[i - 1]->val)) || (i < n - 1 && (inorder[i]->val > inorder[i + 1]->val)))
            {
                if (!check)
                {
                    check = true;
                    first = inorder[i];
                }
                else
                {
                    last = inorder[i]; // It keeps on changing until last condition breaking element not found.
                }
            }
        }
        swap(first->val, last->val);
        return;
    }
};