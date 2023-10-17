#ifndef bst_h
#define bst_h
#define max 20
struct node{
    int key;
    struct node *left, *right;
};
struct node *newnode(int item);
void inorder(struct node *root);
struct node *insert(struct node *node,int key);
struct node *min_value_node(struct node *node);
struct node *deletenode(struct node *root,int key);
#endif 