#include <stdio.h>

int num = 3; //formated as %d or i, can be signed or unsigned, short and long
float fl = 4.2; //can be double - formated as %lf, there is also long double - %Lf
char one_char = 'a';  //note the single quotes
char two_chars[2] = "ab";
char string[] = "This is an array of characters";

int array[5] = {6,7,8,9,10};

int main (){
    printf("This is a number %d\n", num);
    printf("This is a float %f\n", fl);
    printf("This is one char %c, those are two: %s\n", one_char, two_chars);
    printf("This is a string: \n %s\n", string);
    printf("This is the first member of the array: %d\n", array[0]);
}


