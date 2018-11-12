#include <stdio.h>

void swap(int *arr, int a, int b);

void main() {
    int array[9] = {30, 70, 2, 36, 65, 45, -3, 32, 68};
    int length = sizeof(array) / sizeof(int);
    for (int index = 0; index < length; ++index) {
        for (int col = 0; col < length - index -1; ++col) {
            swap(array, col, col+1);
        }
    }

    for(int *index = array; index < (array + length); ++index) {
        printf("%d \n", *index);
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
