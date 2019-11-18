// estimated time = 10min
// actual time = 10min

#include <stdio.h>

int main() {
    int ch, count = 1;

    printf("Page %6i", count);

    while ((ch = fgetc(stdin)) != EOF) {
        if ((ch = fgetc(stdin)) == "\n"){
            count ++;
            printf("Page %6i", count);
        }
        fputc(ch,stdout);
    }

    return 0;
}