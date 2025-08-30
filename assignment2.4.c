#include<stdio.h>
int main(){
    //Declaring Variables
    int total_minutes;
    int hours;
    int minutes;

    //Taking Input
    printf("enter the total numbers in minutes: \t");
    scanf("%d",&total_minutes);

    //Applying Formula
    hours=total_minutes/60;
    minutes=total_minutes % 60;

    //Program Logic
    printf("hours");
    printf("%d",hours);
    printf("\nminutes=");
    printf("%d",minutes);

}
