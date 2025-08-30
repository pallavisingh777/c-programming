#include<stdio.h>
float main(){
    //Declaring Variables
    float kilometres;
    float meters;
    float feet;
    float inches;
    float centimetres;
    float foot;

    //Taking Input
    printf("Enter distance between two cities");
    scanf("%f",&kilometres);

    //Formula
    meters=kilometres*1000;
    feet=meters*3.28084;
    inches=feet*12;
    centimetres=kilometres*100000;

    //Program Logic
    printf("Meters=");
    printf("%2f",meters);
    printf("Feet");
    printf("%2f",foot);
    printf("Inches");
    printf("%2f",inches);
    printf("Centimetres");
    printf("%2f",centimetres);

}
