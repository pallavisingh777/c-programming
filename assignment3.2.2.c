#include<stdio.h>
int main (){
    //Declaring Variables
    char n[50];
    int roll_no;
    int sub1;
    int sub2;
    int sub3;
    int total_marks;
    char division[20];
    float percentage;

    //Taking Input
    printf("Enter roll number: ");
    scanf("%d",& roll_no);

    printf("Enter name: ");
    scanf("%s",& n);

    printf("Enter sub1: ");
    scanf("%d",& sub1);

    printf("Enter sub2: ");
    scanf("%d",& sub2);

    printf("Enter sub3: ");
    scanf("%d",& sub3);

    //Formula
    total_marks = sub1 + sub2+ sub3;
    printf("total_marks %d\n",total_marks);
    percentage = total_marks/300.0*100.0;
    printf("percentage %f\n",percentage);

    //Program Logic
    if (percentage >= 60){
            printf("first devision");
    }
     else if (percentage >=50){
        printf("second devision");
     }
      else if (percentage >=40){
        printf("third devision");
      }
       else{
        printf("fail");
       }
}
