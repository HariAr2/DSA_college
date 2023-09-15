#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
#include "stack.h"
struct stack* create(unsigned capacity){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->capacity=capacity;
    s->top=-1;
    s->arr=(int*)malloc(s->capacity * (sizeof(int)));
    return s;
}
int isfull(struct stack* s){
    return s->top == s->capacity-1;
}
int isempty(struct stack* s){
    return s->top==-1;
}
void push(struct stack* s,int item){
    if(isfull(s)){
        return;
    }
    s->arr[++s->top]=item;
    printf("%d is pushed",item);
}
int pop(struct stack* s){
    if(isempty(s)){
        return INT_MIN;
    }
    return s->arr[s->top--];
}