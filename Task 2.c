#include<stdio.h>

int main() {
    int age;
    printf("Enter your Age: ");
    scanf("%d",&age);

    if (age>=0 && age<=12) {
        printf("You are a Child.");
    }
    else {
        if (age>=13 && age<=19) {
            printf("You are a Teenager.");
        }
        else {
            if (age>=20 && age<=59) {
                printf("You are an Adult.");
            }
            else {
                if (age>=60) {
                    printf("You are a Senior.");
                }
                else {
                    printf("Don't Enter a Negative Enter.");
                }
            }
        }
    }
    return 0;
}