#include<stdio.h>

int main() {
    int rating;
    printf("Rate the Movie The Lion King from (1-5): ");
    scanf("%d",&rating);

    switch (rating) {
        case 1:
            printf("Terrible");
        break;
        case 2:
            printf("Poor");
        break;
        case 3:
            printf("Average");
        break;
        case 4:
            printf("Good");
        break;
        case 5:
            printf("Excellent");
        break;
        default:
            printf("Please enter the Rating between (1-5)!");
    }

    return 0;
}