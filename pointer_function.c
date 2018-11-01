#include<stdio.h>

void outPut(int *pointer, int length);

void main()
{
    int array1[5] = {-7, 5 , 6, 98, -7};
    int array2[3] = {-8, 45, 87};
    outPut(array1, 5);
    outPut(array2, 3);
}

void outPut(int *pointer, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d | ", *(pointer + i));
    }
}