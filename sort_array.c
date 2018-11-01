# include <stdio.h>

void main(void) {
    int arr[5];
    int length = sizeof(arr) / sizeof(int);
    for (int index = 0; index < 5; ++index) {
        scanf("%d", &arr[index]);
    }
    // 冒泡排序
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int exchange = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = exchange;
            }
        }
    }
// 普通数组
    for (int index = 0; index < 5; ++index) {
        printf("%d ", arr[index]);
    }

    printf("\n");
// 地址
    for (int index = 0; index < 5; ++index) {
        printf("%d ", *(arr + index));
    }

    printf("\n");
// 指针
    for (int *pointer = arr; pointer < (arr + 5); ++pointer) {
        printf("%d ", *pointer);
    }
}