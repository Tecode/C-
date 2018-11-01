# include <stdio.h>

int print(int *arr, int length);

void main(void) {
    int arr[3] = {54, 69, 81};
    int length = sizeof(arr) / sizeof(int);
    print(arr, length);
}


int print(int *arr, int length){
    for(int i =0; i < length; ++i) {
        printf("%d ", arr[i]);
    }

}