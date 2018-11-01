#include <stdio.h>

void main() {
    int array[2][3] = {4,5,98,78,563,14};
    for (int row = 0; row < 2; ++row) {
        for(int col = 0; col <3; ++col) {
            printf("a[%d][%d] = %d \n", row, col, array[row][col]);
        }
    }
}