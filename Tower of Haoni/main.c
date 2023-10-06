/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include "stack.h"


int main()
{
    struct stack* s=create(10);
    struct stack* a=create(10);
    struct stack* d=create(10);
    int n=4;
    push(s,4);
    printf("\n");
    push(s,3);
    printf("\n");
    push(s,2);
    printf("\n");
    push(s,1);
    printf("\n");
    printf("\n");
    toh(n,s,a,d);
    display(d);
   
   
    
}