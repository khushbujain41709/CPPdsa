// Leetcode - 108
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public :
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* helper(vector<int>& nums, int lo, int hi){
    if(lo > hi) return NULL;
    int mid = lo + (hi - lo)/2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = helper(nums, lo, mid-1);
    root->right = helper(nums, mid+1 , hi);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    return helper(nums, 0 , n-1);
}
int main(){

}