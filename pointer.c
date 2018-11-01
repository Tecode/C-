#include <stdio.h>

void main() {
    int a = 4;
    int *ip;
    ip = &a;
    printf("%p \n", &a);
    printf("%d", *ip);
}


//#include <stdio.h>
//
//
//int main() {
//    int arr[] = {4, 8, 9};
//    int len = (int) sizeof(arr)/ sizeof(*arr);
//    int *pointer[len];
//    for (int i =0; i<len; ++i) {
//        pointer[i] = &arr[i];
//    }
//    for (int i =0; i<len; ++i) {
//        printf("%d ", *pointer[i]);
//    }
//    return 0;
//}