#include <stdio.h>
#include <getopt.h>
int main (int argc, char *argv[]) {
    char *input[] = argv[2];
    if (argc != 2) {
        printf("You need to provide one cli argument!\n");
    }
    if (input == 'a' || input == 'A') {
        printf("Argument is 'a'");
    }
}