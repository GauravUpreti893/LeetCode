/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        // We are using Level Order Traversal to convert graph let say Example1 into 1E2E3ENN4E5ENNNN, so that when we apply level order traversal again we get our graph back. Let's see each process in detail.
        string s;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* top = q.front();
            q.pop();
            if (top == NULL)
            {
                s += 'N';
            }
            else
            {
                if (top->val < 0)
                    s += '-';
                s += to_string(abs(top->val)); 
                s += 'E'; // Cause value of root can have more than 1 digit, so this can create ambiguity when we are converting this string back to graph, so we will add 'E' in the end of each value, so that we can know when our value is ending.
                q.push(top->left);
                q.push(top->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<TreeNode*> q;
        if (data[0] == 'N')
            return NULL;
        int v = 0, mult = 1;
        int idx = 0;
        bool flag = 0;
        if (data[idx] == '-')
        {
            flag = 1;
            idx++;
        }
        int tidx = idx;
        for (; data[idx] != 'E'; idx++)
        {
            mult *= 10;
        }
        mult /= 10;
        idx = tidx;
        for (; data[idx] != 'E'; idx++)
        {
            v += (data[idx] - '0')*mult;
            mult /= 10;
        }
        idx++;
        if (flag)
            v = -v;
        TreeNode* head = new TreeNode(v);
        q.push(head);
        while (!q.empty())
        {
            TreeNode* top = q.front();
            q.pop();
            if (data[idx++] != 'N')
            {
                string st;
                idx--;
                bool flag = 0;
                if (data[idx] == '-')
                {
                    flag = 1;
                    idx++;
                }
                int v = 0, mult = 1;
                int count = 0;
                int tidx = idx;
                for (; data[idx] != 'E'; idx++)
                {
                    mult *= 10;
                }
                mult /= 10;
                idx = tidx;
                for (; data[idx] != 'E'; idx++)
                {
                    v += (data[idx] - '0')*mult;
                    mult /= 10;
                }
                idx++;
                if (flag)
                    v = -v;
                TreeNode* tn = new TreeNode(v);
                q.push(tn);
                top->left = tn;
            }
            if (data[idx++] != 'N')
            {
                string st;
                idx--;
                bool flag = 0;
                if (data[idx] == '-')
                {
                    flag = 1;
                    idx++;
                }
                int v = 0;
                int tidx = idx;
                int mult = 1;
                for (; data[idx] != 'E'; idx++)
                {
                    mult *= 10;
                }
                mult /= 10;
                idx = tidx;
                for (; data[idx] != 'E'; idx++)
                {
                    v += (data[idx] - '0')*mult;
                    mult /= 10;
                }
                idx++;
                if (flag)
                    v = -v;
                TreeNode* tn = new TreeNode(v);
                q.push(tn);
                top->right = tn;
            }
        }
        return head;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));