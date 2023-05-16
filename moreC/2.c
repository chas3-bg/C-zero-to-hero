#include <stdio.h>
#include <string.h>
char x[] = "kiretza";
char *y = "t";

int main (){

    char *value = strstr(x,y); //var value that is a pointer to the pointer returned from strstr

    printf("%p\n",value); //prints the pointer beggining at the match if substring y is in string x


    printf("%s\n", value);  //prints tza
    if (strstr(x, y)) {
        printf("Yay");
    }else {
        printf("Nay");
    }
    return 0;
}