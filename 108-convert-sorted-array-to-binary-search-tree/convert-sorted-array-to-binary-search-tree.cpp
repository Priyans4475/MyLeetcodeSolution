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

    TreeNode* bst(vector<int>&nums,int start,int end)
    {  if(start<=end)
          {int mid=(start+end)/2;
          TreeNode* root=new TreeNode(nums[mid]);
          root->left=bst(nums,start,mid-1);
          root->right=bst(nums,mid+1,end);
          return root;}
          return nullptr;
    }

    // TreeNode* newNode(int data){
    //     TreeNode* node=new TreeNode();
    //     node->val=data;
    //     node->left=nullptr;
    //     node->right=nullptr;
    //    return node;
    // }

//     TreeNode* preOrder(TreeNode* node)
// {
//     if (node == nullptr)
//         return node;
    
//     preOrder(node->left);
//     preOrder(node->right);
//     return node;
// }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();

        return bst(nums,0,n-1);
        // return preOrder(root);
        
        
    }
};