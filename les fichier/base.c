#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");

    fprintf(file, " Hi girl!\n");

    fclose(file);
    return 0;
}