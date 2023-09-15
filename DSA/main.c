#include <stdio.h>
#include "stack.h"


int main()
{
    struct stack* s=create(10);
    push(s,10);
    printf("\n");
    push(s,30);
    printf("\n");
    push(s,100);
    printf("\n");
    push(s,234);
    printf("\n");
    printf("%d is popped from stack",pop(s));
    printf("\n");
}
