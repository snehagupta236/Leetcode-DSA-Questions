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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        if (inorder.empty())
            return NULL;

   
        int rootValue = postorder.back();

        TreeNode* root = new TreeNode(rootValue);

        
        int pos = 0;
        while (inorder[pos] != rootValue) {
            pos++;
        }

        
        vector<int> leftIn(inorder.begin(), inorder.begin() + pos);
        vector<int> rightIn(inorder.begin() + pos + 1, inorder.end());

        vector<int> leftPost(postorder.begin(), 
                             postorder.begin() + leftIn.size());

        vector<int> rightPost(postorder.begin() + leftIn.size(), 
                              postorder.end() - 1);

        root->left = buildTree(leftIn, leftPost);
        root->right = buildTree(rightIn, rightPost);

        return root;

    }
};