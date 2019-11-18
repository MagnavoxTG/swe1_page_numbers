// estimated time = 10min
// actual time = 10min

#include <stdio.h>

int main() {
    int ch, count = 1;

    // First page number
    printf("Page %6i", count);

    while ((ch = fgetc(stdin)) != EOF) {
        // Once it finds an enter it writes a new page number
        if (ch == "\n"){
            count ++;
            printf("Page %6i", count);
        }
        fputc(ch,stdout);
    }

    return 0;
}