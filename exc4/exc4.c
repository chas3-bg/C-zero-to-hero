#include <stdio.h>

const float PI = 3.14;
int radius;

calc_area(int r) {
    return r*r*PI;
}

int main(){
    printf("Please input the radius of a circle\n");
    scanf("%d", &radius);
    printf("The area is %d\n", calc_area(radius));
    return 0;
}
