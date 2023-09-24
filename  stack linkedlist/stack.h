#ifndef STACK_H
#define STACK_H

// Define the structure for a single node
struct Node {
    int data;
    struct Node* next;
};

// Define the Stack structure
struct Stack {
    struct Node* top;
};

// Function prototypes
struct Stack* createStack();
int isEmpty(struct Stack* stack);
void push(struct Stack* stack, int data);
int pop(struct Stack* stack);
int peek(struct Stack* stack);

#endif
