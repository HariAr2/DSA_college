#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
#include"queue.h"

struct Queue* create(unsigned cap){
    struct Queue* q =(struct Queue*)malloc(sizeof(struct Queue));
    q->cap =cap;
    q->front = q->size =0;
    q->rear = cap-1;
    q->arr = (int*)malloc(q->cap*sizeof(int));
    return q;
}
bool isfull(struct Queue* q){
    return(q->size ==q->cap);
}
bool isempty(struct Queue* q){
    return(q->size==0);
}
void enqueue(struct Queue* q,int item){
    if(isfull(q)){
        return;
    }
    q->rear = (q->rear+1)%q->cap;
    q->arr[q->rear]=item;
    q->size=q->size+1;
    printf("%d is enqueued\n",item);
}
void dequeue(struct Queue* q){
    if(isempty(q)){
        return;
    }
    int item=q->arr[q->front];
    q->front=(q->front+1)%q->cap;
    q->size=q->size-1;
    printf("%d is dequeued\n",item);
}