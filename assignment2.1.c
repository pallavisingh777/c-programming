#include<stdio.h>
float main(){
    //Declaring variable
    float centigrade;
    float fahrenheit;

    //Taking Input
    printf("enter temperature in centigrade: \t");
    scanf("%f",&centigrade);

    //Applying Formula
    fahrenheit = (9*centigrade)/5+32;

    //Program Logic
    printf("fahrenheit");
    printf("%f",fahrenheit);

}
