#include <stdio.h>
#include <stdlib.h>

#define N 256

int main(void)
{
    char s[] = "チャーリー・ブラウン 4 男性";
    char name[N] = {'\0'};
    char sex[N] = {'\0'};
    int age;

    sscanf(s, "%s %d %s", name, &age, sex);
    printf("%s, %d, %s\n", name, age, sex);

    return EXIT_SUCCESS;
}