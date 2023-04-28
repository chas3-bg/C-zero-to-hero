#include <stdio.h>
#include <stdlib.h>
int num;
char *str;

int main(){
    printf("Please input a number\n");
    scanf("%d", &num);
    printf("Please input a string\n");
    scanf("%ms", &str); //m specifies that the buffer size is dynamically allocated, man scanf
    printf("The string is:\n%s\nand the number is\n%d\n", str, num);

    free(str); //scanf states you should free the buffer when no longer needed
/*
    printf("%s\n", str); //this would be gibberish
    str = "bnmqweqew"; //the lenghts of this doesn`t matter
    printf("%s\n", str);

*/
    return 0;
}