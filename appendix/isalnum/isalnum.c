#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    if (isalnum('z')) {
        puts("アルファベットか数字です.");
    } else {
        puts("アルファベットでも数字でもありません.");
    }

    if (isalnum('9')) {
        puts("アルファベットか数字です.");
    } else {
        puts("アルファベットでも数字でもありません.");
    }

    if (isalnum('?')) {
        puts("アルファベットか数字です.");
    } else {
        puts("アルファベットでも数字でもありません.");
    }

    return EXIT_SUCCESS;
}