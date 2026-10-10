#include <stdio.h>

int main() {
    //test case 1
    float value_1a, value_2a, result_a;
 
    printf("Enter the First Value : ");
    scanf("%f", &value_1a);
    printf("Enter the Second Value : ");
    scanf("%f", &value_2a);

    result_a = value_1a + value_2a;

    printf("The sum of the first value \"%g\" and second value \"%g\" is \"%.2f\"\n", value_1a, value_2a, result_a);
    
    //test case 2
    float value_1b, value_2b, result_b;

    printf("Enter the First Value : ");
    scanf("%f", &value_1b);
    printf("Enter the Second Value : ");
    scanf("%f", &value_2b);

    result_b = value_1b + value_2b;

    printf("The sum of the first value \"%g\" and second value \"%g\" is \"%.2f\"\n", value_1b, value_2b, result_b);
    return 0;
}