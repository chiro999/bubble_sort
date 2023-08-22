#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int n){
    for (int i = 0; i < n - 1; i++) {
        int swap_flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swap_flag = 1;
            }
        }
        if (swap_flag == 0){
            break;
        }
    }
}

int main(){
    int array[] = {13, 21, 99, 7, 12, 15};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    bubbleSort(array, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}