#include<stdio.h>
float main(){
    //Declaring Variables
    float radius;
    float area;
    float perimeter;
    float pi=3.14159;

    //Taking Input
    printf("enter the value of radius");
    scanf("%f",&radius);

    //Formula
    perimeter=2*pi*radius;
    area=pi*radius*radius;

    //program Logic
    printf("%f",perimeter);
    printf("%f",area);


}
