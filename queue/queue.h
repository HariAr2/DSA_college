#ifndef queue_h
#define queue_h
struct Queue{
    int front,rear,size;
    unsigned cap;
    int* arr;
};
struct Queue* create(unsigned cap);
void enqueue(struct Queue* q,int item);
void dequeue(struct Queue* q);
bool isfull(struct Queue* q);
bool isempty(struct Queue* q);


#endif