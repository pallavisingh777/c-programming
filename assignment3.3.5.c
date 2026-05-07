#include<stdio.h>
int main(){

    //Declaring Variables
    char grade;

    //Taking Input
    printf("Enter grade: ");
    scanf("%c", &grade);

    //Program Logic
    if (grade=='e'){
        printf("Excellent");
    }
    else if(grade=='v'){
        printf("Very good");
    }
    else if(grade=='g'){
        printf("Good");
    }
    else if(grade=='a'){
        printf("Average");
    }
    else{
        printf("Fail");
    }

}
