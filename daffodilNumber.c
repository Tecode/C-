#include <stdio.h>
#include <math.h>
#include <time.h>

int daffodilNumber(int value);


int main() {
    for(int index=100; index < 1000; ++index) {
        if(daffodilNumber(index) == 1) {
            printf("%d \n", index);
        }
    }
    return 0;
}

int daffodilNumber(int value) {
    int a, b, c;
    a = value/100;
    b = (value - a*100)/10;
    c = (value - a*100 - b*10);
    if (value == a*a*a+b*b*b+c*c*c) {
        return 1;
    }
    return 0;
}

