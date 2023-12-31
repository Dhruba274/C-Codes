#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 5

void bubble_sort(int[]);

int main() {
    int arr_sort[MAX_SIZE], i;

    printf("Simple Bubble Sort Example - Array and Functions\n");
    printf("\nEnter %d Elements for Sorting\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_sort[i]);

    printf("\nYour Data   :");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", arr_sort[i]);
    }

    bubble_sort(arr_sort);
    getch();
}

void bubble_sort(int fn_arr[]) {
    int i, j, a, t;

    for (i = 1; i < MAX_SIZE; i++) {
        for (j = 0; j < MAX_SIZE - 1; j++) {
            if (fn_arr[j] > fn_arr[j + 1]) {
                //Swapping Values 
                t = fn_arr[j];
                fn_arr[j] = fn_arr[j + 1];
                fn_arr[j + 1] = t;
            }
        }

        printf("\nIteration %d : ", i);
        for (a = 0; a < MAX_SIZE; a++) {
            printf("\t%d", fn_arr[a]);
        }
    }

    printf("\n\nSorted Data :");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", fn_arr[i]);
    }
}