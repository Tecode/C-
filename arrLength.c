#include <stdio.h>


int main() {
    int arr[] = {4, 98, 9};
    int len = (int) sizeof(arr)/ sizeof(*arr);
    int *pointer[len];
    for (int i =0; i<len; ++i) {
        pointer[i] = &arr[i];
        printf("%p \n", &arr[i]);
    }
    printf("%d \n", (int) sizeof(arr) / sizeof(int));
    for (int i =0; i<len; ++i) {
        printf("%d ", *pointer[i]);
    }
    return 0;
}