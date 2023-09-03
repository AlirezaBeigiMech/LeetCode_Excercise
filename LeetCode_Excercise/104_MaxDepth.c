/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    
};
int maxDepth(struct TreeNode* root) {

    int Left, Right;
    if (root == NULL) {
        return 0;
    }
    if (root->left != NULL) {
        Left = maxDepth(root->left);
        Left = Left + 1;
    }
    else if (root->left == NULL) {
        Left = 1;
    }

    if (root->right != NULL) {
        Right = maxDepth(root->right);
        Right = Right + 1;
    }
    else if (root->right == NULL) {
        Right = 1;
    }

    if (Right > Left) {
        return Right;
    }
    else {
        return Left;
    }

}


