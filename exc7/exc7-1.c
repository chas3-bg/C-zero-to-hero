#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int start = 0;
    if (argc == 1) {
        printf("Usage: a <number to count to>");
    } else {
        int up_to = atoi(argv[1]);
        if (up_to <= 0) {
            printf("Invalid input, must be a positive integer!\n");
        } else {
            while (start <= up_to) {
                printf("%i \n", start);
                start++;
            }
        }

    }
}