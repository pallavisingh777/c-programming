#include<stdio.h>
float main(){
    //Declaring variables
    float radius;
    float volume;
    float PI=3.14;

    //Taking Input
    printf("enter the radius of a sphere: \t");
    scanf("%f",&radius);

    //Applying Formula
    volume = (4* PI * radius * radius * radius)/3;

    //Program Logic
    printf("volume");
    printf("%f",volume);

}
