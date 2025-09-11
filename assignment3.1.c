#include <stdio.h>
int main (){
    //Declaring Variable
    int year;

    //Taking Input
    printf("Enter a year");
    scanf("%d",&year);

    //Program Logic
    if(year % 4 == 0 ){

            if (year % 100 == 0){

                if(year % 400 == 0){
                    printf("%d it is a leap year");
                }
                else{
                    printf("it is not a leap year");
                }
            }

            else{
                printf("it is a leap year");
            }
    }

                 else{
                printf("it is not a leap year");
      }



}
