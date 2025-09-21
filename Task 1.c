#include<stdio.h>

int main(){
    char traffic_light;
    printf("Enter Traffic Signal Color (R for Red, Y for Yellow and G for Green): ");
    scanf(" %c", &traffic_light);

    if (traffic_light == 'R' || traffic_light == 'r') {
        printf("Stop!");
    }
    else {
        if (traffic_light == 'Y' || traffic_light == 'y') {
            printf("Caution!");
        }
        else {
            if (traffic_light == 'G' || traffic_light == 'g') {
                printf("Go!");
            }
            else {
                printf("Error: Invalid Color! Please enter R,G,Y.");
            }
        }
    }

    return 0;
}