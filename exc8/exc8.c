#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
    int input = atoi(argv[1]);
    if (argc < 2) {
        printf("Give one argument");
        return 1;
    } else if (argc > 2) {
        printf("Give only one argument");
        return 1;
    }else {

        switch(input) {
            case 1: printf("The number is one\n");
            break;
            case 2: printf("The number is two\n");
            break;
            case 3: printf("The number is three\n");
            break;
            default: printf("The number is different than 1,2 or 3\n");
        }

    }
    return 0;
}