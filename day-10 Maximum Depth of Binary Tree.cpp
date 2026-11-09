/*
 * DATE: 08/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * PROBLEM STATEMENT: Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 3
Example 2:

Input: root = [1,null,2]
Output: 2
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-100 <= Node.val <= 100
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *  1. Maximum depth is the number of nodes in the longest path from root to leaf.
 * 2. Use recursion to calculate the depth of left and right subtrees.
 * 3. Base case: If root == NULL, return 0.
 * 4. Use 1 + max(left depth, right depth) to find maximum depth.
 * 5. Time Complexity: O(N), where N is the number of nodes.
 * 6. Space Complexity: O(H), where H is the height of the tree.
 *
 * ----------------------------------------
 
 */

#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL){
            return 0;
        }
        else{
            return 1 + max(maxDepth(root->left),maxDepth(root->right));
        }
    }
};