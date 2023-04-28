#include <stdio.h>



int main() {
    int num;
    char str[10];    //this is treated as a pointer to an integer array

    printf("Please input a string:\n");
    scanf("%s", str); //no &str because str is already a pointer to an array

    printf("Please input a number:\n");
    scanf("%d",&num);
    printf("The string is:\n%s\nand the number is\n%d\n", str, num);
    return 0;
}