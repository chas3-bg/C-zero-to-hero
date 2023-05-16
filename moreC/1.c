#include <stdio.h>
#include <stdlib.h>

//char *x[]   = array of char pointers
//char **x = pointer to char pointer

int main (int argc, char *argv[]) {
    //print CLI args
    int i = 0;
for (i = 0; i < argc; i++) {
    if (i == 0) {
        printf("Script: %s\n", argv[i]);
    } else {
    printf("%d : %s\n", i, argv[i]);
    }
}

//important to note that those are the same: pointer to array of pointers:
char x[] = "one\n"; //this is  an array of character pointers
char *y = "two\n"; //
int nums[] = {1,2,3};
printf("%c\n", x[0]); //both of those work
printf("%c\n",y[0]);

printf ("%s\n%s", x, y);

//sizeof can tell the difference though
printf("size of 'one' in array of char pointets - %lu\n", sizeof(x)); //5 = 3 + \n + '\0'
printf("size of 'two' in pointer to char pointers - %lu\n", sizeof(y)); // 8 = 3 + \n + '\0' + ????
printf("size of array of 3 integers - %lu\n",sizeof(nums)); //12 = 3*4 (each integer is 4 bytes or 32 bits)

char z[] = {'o','n','e','\0'};
printf("%s\n",z);
}