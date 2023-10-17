#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
struct node *newnode(int item){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->right=temp->left=NULL;
    return temp;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ->",root->key);
        inorder(root->right);
    }
}
struct node *insert(struct node *node,int key){
    if(node==NULL) return newnode(key);
    if(key < node->key){
        node->left=insert(node->left,key);
    }
    else{
        node->right=insert(node->right,key);
    }
    
    return node;
}

struct node *min_value_node(struct node *node){
    struct node *current = node;
    while(node && node->left != NULL){
        current=current->left;
    }
    return current;
}
struct node *deletenode(struct node *root,int key){
    if(root==NULL) return root;
    if(key < root->key){
        root->left=deletenode(root->left,key);
    }
    else if(key > root->key){
        root->right=deletenode(root->right,key);
    }
    else{
        if(root->left == NULL){
            struct node *temp =root->right;
            free(root);
            return temp;
        }
        else if(root->right== NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        struct node *temp=min_value_node(root->right);
        root->key =temp->key;
        root->right=deletenode(root->right,temp->key);
    }
    return root;
}