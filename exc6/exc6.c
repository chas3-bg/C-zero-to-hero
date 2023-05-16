#include <stdio.h>

int divide (int a, int b) {
    return a % b;
}

int main () {
    int num1;
    int num2;

    printf("Input one whole integer as numerator! ");
    scanf("%i", &num1);
    printf("Input deonminator! ");
    scanf("%i", &num2);

    if (divide(num1, num2) == 0) {
        printf("There is no remainder");
    } else {
        printf("There is a remainder");
    }


}