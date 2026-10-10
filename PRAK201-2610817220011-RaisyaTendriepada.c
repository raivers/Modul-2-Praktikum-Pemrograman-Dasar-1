#include <stdio.h>

int main() {
    char name[50], student_id[50], paralel_class[50], birth[50], address[50], hobby[50], phone_number[50];

    printf("Name                : ");
    scanf(" %[^\n]", name);
    printf("Student ID          : ");
    scanf("%s", student_id);
    printf("Paralel Class       : ");
    scanf("%s", paralel_class);
    printf("Place/Date of Birth : ");
    scanf(" %[^\n]", birth);
    printf("Address             : ");
    scanf(" %[^\n]", address);
    printf("Hobby               : ");
    scanf(" %[^\n]", hobby);
    printf("Phone Number        : ");
    scanf("%s", phone_number);

    printf("\nName                : %s\n", name);
    printf("Student ID          : %s\n", student_id);
    printf("Paralel Class       : %s\n", paralel_class);
    printf("Place/Date of Birth : %s\n", birth);
    printf("Address             : %s\n", address);
    printf("Hobby               : %s\n", hobby);
    printf("Phone Number        : %s\n", phone_number);
    return 0;
}