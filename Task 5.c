#include<stdio.h>

int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    if (num%3==0 && num%5==0) {
        printf("The Number is Divisible by 3 and 5.");
    }
    else {
        printf("The Number is not Divisible by 3 and 5.");
    }

    return 0;
}