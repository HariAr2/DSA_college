#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    struct Stack* stack = createStack();
    int choice, data;

    do {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(stack, data);
                break;
            case 2:
                if (!isEmpty(stack)) {
                    printf("Popped element: %d\n", pop(stack));
                } else {
                    printf("Stack is empty. Cannot pop.\n");
                }
                break;
            case 3:
                if (!isEmpty(stack)) {
                    printf("Top element: %d\n", peek(stack));
                } else {
                    printf("Stack is empty. Cannot peek.\n");
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
