#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
int main(){
    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    printf("Inorder traversal : \n");
    inorder(root);
    printf("\nAfter deleting 8\n");
    root = deletenode(root, 8);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\nAfter deleting 10\n");
    root = deletenode(root, 10);
    printf("Inorder traversal: ");
    inorder(root);
    
    
}