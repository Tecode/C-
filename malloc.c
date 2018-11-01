# include <stdio.h>
# include <stdlib.h>  //malloc()的头文件

void main(void)
{
    int i = 0;
    while (1)
    {
        int *p = malloc(1000);
        i ++;
        printf("%d ", i);
    }
}