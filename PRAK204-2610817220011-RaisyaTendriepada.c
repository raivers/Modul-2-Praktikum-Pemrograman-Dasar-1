#include <stdio.h>

int main() {
    float phi = 22.0 / 7.0;

    //test case 1
    float r1, t1, volume1, area1, circumference1;
    
    scanf("%f", &r1);
    scanf("%f", &t1);

    volume1 = phi * r1 * r1 *  t1;
    area1 = 2 * phi * r1 * (r1 + t1);
    circumference1 = 2 * phi * r1;

    printf("Volume: %.2f\n", volume1);
    printf("Area: %.2f\n", area1);
    printf("Circumference: %.2f\n", circumference1);

    //test case 2
    float r2, t2, volume2, area2, circumference2;

    scanf("%f %f", &r2, &t2);

    volume2 = phi * r2 * r2 * t2;
    area2 = 2 * phi * r2 * (r2 + t2);
    circumference2 = 2 * phi * r2;

    printf("Volume: %.2f\n", volume2);
    printf("Area: %.2f\n", area2);
    printf("Circumference: %.2f\n", circumference2);
    return 0;
}