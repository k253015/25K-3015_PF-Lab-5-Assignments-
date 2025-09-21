#include<stdio.h>

int main() {
    int num1,num2;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);

    (num1>num2)?printf("The Maximum Number is %d",num1):printf("The Maximum Number is %d",num2);

    return 0;
}