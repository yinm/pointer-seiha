#include <stdio.h>

int main(void)
{
    int array[5];
    int *p;
    int i;

    for (i = 0; i < 5; i++) {
        array[i] = i;
    }

    p = &array[0];
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
}