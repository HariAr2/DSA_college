#ifndef tree_h
#define tree_h

struct Node{
    int key;
    std::vector<Node*>child ;
};
Node *newnode(int key);
void level_order_traversal(Node * root);


#endif 