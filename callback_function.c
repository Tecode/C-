#include <stdio.h>

void swap(int *arr, int a, int b, int (*callBack)());
int sum(int *a, int *b);

void main() {
    int array[10] = {30, 70, 2, 36, 65, 45, -3, 32, 68, 38};
    int length = sizeof(array) / sizeof(int);
    int (*callBack)();
    callBack = sum;
    for (int index = 0; index < length; ++index) {
        for (int col = 0; col < length - index -1; ++col) {
            swap(array, col, col+1, callBack);
        }
    }

    for(int *index = array; index < (array + length); ++index) {
        printf("%d \n", *index);
    }
}

int sum(int *a, int *b) {
    return *a + *b;
}

void swap(int *arr, int a, int b, int (*callBack)()) {
    int temp;
    if (arr[a] > arr[b]) {
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    printf("Sum: %d + %d = %d \n", arr[a], arr[b], (*callBack)(&arr[a], &arr[b]) );
}
