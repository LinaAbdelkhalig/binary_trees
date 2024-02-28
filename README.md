# 0x1D. C - Binary trees

In this project we learned about the binary trees and the difference between a binary tree and a binary search tree. We learned more about the traversal methodsto go through a binary tree. We understood what a complete, a full, a perfect, a balanced binary tree is.

## Files
### Header file:
[binary_trees.h](./binary_trees.h) Containing the prototypes for all the functions, in addition, it contains all the types needed.
- Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
- Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
- AVL Tree
```
typedef struct binary_tree_s avl_t;
```
- Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
from tasks 0 to 23, we will only deal with simple binary trees.

### Print function
[binary_tree_print.c](./binary_tree_print.c) Used to print binary trees.
