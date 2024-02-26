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
   void preorder(TreeNode* node,vector<int>&arr)
   {
       if(node==nullptr)
       {  arr.push_back(101);
           return;
       }

       arr.push_back(node->val);
       preorder(node->left,arr);
       preorder(node->right,arr);
   }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>a,b;
        preorder(p,a);
        preorder(q,b);

        if(a.size()!=b.size())
        return false;
        else
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]!=b[i])
                return false;
            }
        }

        return true;
    }
};