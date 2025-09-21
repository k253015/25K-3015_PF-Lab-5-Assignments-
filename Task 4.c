#include<stdio.h>

int main() {
    int amount;
    printf("Enter the Withdrawal Amount in Multiples of 20$ (Max Limit is 500$): ");
    scanf("%d",&amount);

    if (amount>=0 && amount<=500) {
        if (amount % 20 == 0) {
            printf("Withdrawal Approved.");
        }
        else {
            printf("Withdrawal Denied! Please Enter the Amount Multiple of 20$.");
        }
    }
    else {
        printf("Withdrawal Denied! Please Enter the Amount in between Max Limit of 500$.");
    }

    return 0;
}