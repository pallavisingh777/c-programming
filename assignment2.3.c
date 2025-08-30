#include<stdio.h>
int main(){
    //Declaring Variables
    int hours;
    int minutes;
    int total_minutes;

    //Taking Input
    printf("enter the number of hours: \t");
    scanf("%d",&hours);
    printf("enter the number of minutes: \t");
    scanf("%d",&minutes);

    //Applying Formula
    total_minutes=(hours*60)+minutes;

    //Program Logic
    printf("total minutes");
    printf("%d",total_minutes);

}
