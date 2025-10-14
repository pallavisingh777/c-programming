#include<stdio.h>
int main(){
    //Declaring Variables
    int angle_1;
    int angle_2;
    int angle_3;


    //Taking Input
    printf("Enter angle 1: ");
    scanf("%d",& angle_1);
    printf("Enter angle 2: ");
    scanf("%d",& angle_2);
    printf("Enter angle 3: ");
    scanf("%d",& angle_3);


    //Program Logic
    if(angle_1 + angle_2 + angle_3 == 180){
        printf("Valid Triangle");
    }
     else{
        printf("Invalid Triangle");
     }

}
