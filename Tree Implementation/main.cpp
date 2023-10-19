#include <iostream>
#include<limits.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#include "tree.h"


int main(){
    Node *root = newnode(10);
    (root->child).push_back(newnode(2));
    (root->child).push_back(newnode(34));
    (root->child).push_back(newnode(56));
    (root->child).push_back(newnode(100));
    (root->child[0]->child).push_back(newnode(77));
    (root->child[0]->child).push_back(newnode(88));
    (root->child[2]->child).push_back(newnode(1));
    (root->child[3]->child).push_back(newnode(7));
    (root->child[3]->child).push_back(newnode(8));
    (root->child[3]->child).push_back(newnode(9));
  
    cout << "Level order traversal Before Mirroring\n";
    level_order_traversal(root);
   
    return 0;
}


/*
       OUTPUT
Level order traversal Before Mirroring
10 
2 34 56 100 
77 88 1 7 8 9 


*/
