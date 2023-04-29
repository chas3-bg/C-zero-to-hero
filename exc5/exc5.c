#include <stdio.h>
#include <stdlib.h>

float addition (float a, float b) {
    return a + b; 
}

float substraction (float a, float b) {
    return a - b; 
}

float multiplication (float a, float b) {
    return a * b;
}

float division (float a, float b) {
    return a / b; 
}

int main (int argc, char *argv) {
    float input1;
    char *operation; //This creates a character pointer which points to a string literal with dynamic buffer size
    float input2;

    printf("Enter first number\n");
    scanf("%f", &input1); 
    printf("Input operation (+,-,*,/)\n");
    scanf("%ms", &operation);
    printf("Input second number\n");
    scanf("%f", &input2);

    if (*operation == '-') {
        printf("%g\n",substraction(input1, input2)); //g format chooses between f and e format and uses the one that is shorted (AFAIK)
    }

    if (*operation == '+') {
        printf("%g\n",addition(input1, input2));
    }

    if (*operation == '*') { 
        printf("%g\n",multiplication(input1, input2));
    }

    if (*operation == '/') {
        printf("%g\n",division(input1, input2));
    }

    free(operation);
    return 0;
}