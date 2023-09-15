#ifndef stack_h
#define stack_h
#define max 20
struct stack{
    int top;
    unsigned capacity;
    int* arr;
};
struct stack* create(unsigned capacity);
int isfull(struct stack* s);
int isempty(struct stack* s);
void push(struct stack* s,int item);
int pop(struct stack* s);
#endif 