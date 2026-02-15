\# Binary Tree Implementation in C



\## Code Overview

This program implements a binary tree with recursive traversal.



\## Operations Demonstrated

\- Node creation

\- Inorder traversal (Left-Root-Right)



\## Code Explanation

```c

struct TreeNode {

&nbsp;   int data;

&nbsp;   struct TreeNode\* left;   // Left child

&nbsp;   struct TreeNode\* right;  // Right child

};



// Recursive inorder traversal

void inorder(struct TreeNode\* root) {

&nbsp;   if(root != NULL) {

&nbsp;       inorder(root->left);   // Visit left

&nbsp;       printf("%d ", root->data);  // Visit root

&nbsp;       inorder(root->right);  // Visit right

&nbsp;   }

}

How to Compile and Run

bash

gcc tree.c -o tree

./tree

Sample Output

text

Inorder traversal: 4 2 5 1 3 

Time Complexity

Inorder traversal: O(n)



Search: O(n) in worst case



Insertion: O(n) in worst case



Space Complexity

O(n) for storing nodes



O(h) for recursive call stack (h = height)



Real-World Applications

File system hierarchy



HTML DOM structure



Database indexing



Decision trees in AI

