#include <stdio.h>

void swap(int *arr, int a, int b);

void main() {
    int array[6] = {1, 23, 68, 0, 87, 68};
    int length = sizeof(array) / sizeof(int);
    for (int index = 0; index < length; ++ index) {
        int min = index;
        for (int index_col = index + 1; index_col < length; ++index_col) {
            if (array[min] > array[index_col]) {
                min = index_col;
            }
        }
        if (min != index) {
            swap(array, index, min);
        }
    }
    for (int *index = array; index < (array + length); ++index) {
        printf("%d ", *index);
    }
}


void swap(int *arr, int a, int b) {
    int temp;
    if (arr[a] > arr[b]) {
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
