#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    int opt;
    if (argc == 1) {
        printf("Usage: \n ilr \n f ");
    }
    while (( opt = getopt(argc, argv, "if:lrx")) != -1) {
        switch(opt){
            case 'i':
            case 'l':
            case 'r':
                printf("Option:%c\n", opt);
                break;
            case 'f': 
                printf("filename: %s\n", optarg);
                break;
            case ':':
                printf("Option needs a value\n");
                break;
            case '?':
                printf("unknown option %c\n", optopt);
                break;
        }
    }
    for (; optind < argc; optind++) {
        printf ("Extra arguments: %s\n", argv[optind]);
    }
    return 0;
}