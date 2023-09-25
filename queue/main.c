#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include"queue.h"
int main(){
    struct Queue* q =create (10);
    enqueue(q,10);
    enqueue(q,15);
    enqueue(q,20);
    dequeue(q);
    dequeue(q);
}