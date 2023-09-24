#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows for the 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for the 1st matrix: ");
    scanf("%d", &c1);

    int ***arr = (int ***)malloc(r1 * sizeof(int **));
    for (i = 0; i < r1; i++) {
        arr[i] = (int **)malloc(c1 * sizeof(int *));
        for (j = 0; j < c1; j++) {
            arr[i][j] = (int *)malloc(sizeof(int));
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", arr[i][j]);
        }
    }

    printf("Enter the number of rows for the 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns for the 2nd matrix: ");
    scanf("%d", &c2);

    int ***arr2 = (int ***)malloc(r2 * sizeof(int **));
    for (i = 0; i < r2; i++) {
        arr2[i] = (int **)malloc(c2 * sizeof(int *));
        for (j = 0; j < c2; j++) {
            arr2[i][j] = (int *)malloc(sizeof(int));
        }
    }

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", arr2[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Matrix multiplication is impossible.\n");
    } else {
        int ***arr3 = (int ***)malloc(r1 * sizeof(int **));
        for (i = 0; i < r1; i++) {
            arr3[i] = (int **)malloc(c2 * sizeof(int *));
            for (j = 0; j < c2; j++) {
                arr3[i][j] = (int *)malloc(sizeof(int));
            }
        }

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                *arr3[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    *arr3[i][j] += *arr[i][k] * *arr2[k][j];
                }
            }
        }

        printf("Result matrix after multiplication:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", *arr3[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                free(arr3[i][j]);
            }
            free(arr3[i]);
        }
        free(arr3);
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            free(arr2[i][j]);
        }
        free(arr2[i]);
    }
    free(arr2);

    return 0;
}
