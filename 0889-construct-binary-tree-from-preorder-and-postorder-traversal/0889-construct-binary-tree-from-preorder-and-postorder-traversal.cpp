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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        if(preorder.empty())return NULL;
        int rootvalue  = preorder[0];
        TreeNode* root = new TreeNode(rootvalue);
        if(preorder.size() == 1)return root;
        int leftroot = preorder[1];
        int pos = 0;

        while(postorder[pos] != leftroot){
            pos++;
        }
         
        vector<int> leftPre(preorder.begin() + 1,
                            preorder.begin() + 1 + pos+1);
  
        vector<int> rightPre(preorder.begin() + 1 +  pos+1,
                             preorder.end());

        vector<int> leftPost(postorder.begin(),
                             postorder.begin() + pos+1);

        vector<int> rightPost(postorder.begin() +  pos+1,
                              postorder.end() - 1);

        root->left = constructFromPrePost(leftPre, leftPost);
        root->right = constructFromPrePost(rightPre, rightPost);

         return root;
    }
};