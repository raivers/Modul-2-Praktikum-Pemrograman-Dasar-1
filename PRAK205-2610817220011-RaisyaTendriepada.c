#include <stdio.h>
#include <math.h>

int main() {
    //test case 1
    float a1, b1, base1, height1, perimeter1, area1;

    scanf("%f %f", &a1, &b1);

    base1 = sqrt(b1 * b1 - a1 * a1);
    height1 = a1;
    perimeter1 = a1 + b1 + base1;
    area1 = 0.5 * base1 * height1;

    printf("Base: %g cm\n", base1);
    printf("Height: %g cm\n", height1);
    printf("Perimeter: %g cm\n", perimeter1);
    printf("Area: %g cm^2\n", area1);

    //test case 2
    float a2, b2, base2, height2, perimeter2, area2;

    scanf("%f", &a2);
    scanf("%f", &b2);

    base2 = sqrt(b2 * b2 - a2 * a2);
    height2 = a2;
    perimeter2 = a2 + b2 + base2;
    area2 = 0.5 * base2 * height2;

    printf("Base: %g cm\n", base2);
    printf("Height: %g cm\n", height2);
    printf("Perimeter: %g cm\n", perimeter2);
    printf("Area: %g cm^2\n", area2);    
    return 0;
}