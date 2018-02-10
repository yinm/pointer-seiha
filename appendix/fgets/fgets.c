#include <stdio.h>
#include <stdlib.h>

#define N 256

int main(void)
{
    FILE *fp;
    char *filename = "sample.txt";
    char readline[N] = {'\0'};

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "%sのオープンに失敗しました.\n", filename);
        exit(EXIT_FAILURE);
    }

    while (fgets(readline, N, fp) != NULL) {
        puts(readline);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}
