#include<stdio.h>
int main(){

    //Declaring Variables
    int temperature;

    //Taking Input
    printf("Enter Temperature");
    scanf("%d",& temperature);

    //Program Logic
    if(temperature<0){
        printf("Freezing weather");
    }
     else if(temperature>=0&&temperature<10){
        printf("Very Cold weather");
     }
      else if(temperature>=10&&temperature<20){
        printf("Cold weather");
      }
       else if(temperature>=20&&temperature<30){
        printf("Normal in Temperature");
       }
        else if(temperature>=30&&temperature<40){
            printf("It's Hot");
        }
         else{
            printf("It's Very Hot");
         }
}
