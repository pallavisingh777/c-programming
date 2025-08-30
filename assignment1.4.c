#include<stdio.h>
int main(){
    //Declaring Variables
    int subject_1;
    int subject_2;
    int subject_3;
    int subject_4;
    int subject_5;
    int aggregate_marks;
    float percentage;

    //Taking Input
    printf("enter marks of subject 1: \t");
    scanf("%d",&subject_1);
    printf("enter marks of subject 2: \t");
    scanf("%d",&subject_2);
    printf("enter marks of subject 3: \t");
    scanf("%d",&subject_3);
    printf("enter marks of subject 4: \t");
    scanf("%d",&subject_4);
    printf("enter marks of subject 5: \t");
    scanf("%d",&subject_5);

    //Formula
    aggregate_marks = subject_1+ subject_2+ subject_3+ subject_4+ subject_5;
    percentage = ((float)aggregate_marks / 500) * 100;

    //Program Logic
    printf("aggregate_marks");
    printf("%d",aggregate_marks);
    printf("\n percentage");
    printf("%f",percentage);

}
