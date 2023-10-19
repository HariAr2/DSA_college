#include <iostream>
#include<limits.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#include "tree.h"
Node *newnode(int key){
    Node *temp = new Node;
    temp->key = key;
    return temp;
}
void level_order_traversal(Node * root){
    if(root==NULL){
        return ;
    }
    queue<Node*>q ;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n>0){
            Node *p=q.front();
            q.pop();
            cout<<p->key<<" ";
            for(int i=0;i<p->child.size();i++){
                q.push(p->child[i]);
            }
            n--;
        }
        cout<<endl;
    }
}